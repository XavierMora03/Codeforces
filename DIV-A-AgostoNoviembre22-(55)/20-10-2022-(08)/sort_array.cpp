#include <string.h>

#include <iostream>
using namespace std;

int main() {
  int i, j;
  long long n;
  cin >> n;
  long long a[n];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &a[i]);
  }
  i = 0;
  int indice_inicio = 0;
  int indice_final = 0;
  bool subcadenatomada = false;
  while (i < n - 1) {
    if (a[i] <= a[i + 1]) {
      i++;
      continue;
    } else if (!subcadenatomada) {
      indice_inicio = i;
      while (i < n - 1 && a[i] >= a[i + 1]) {
        i++;
      }
      indice_final = i;
      if (indice_inicio - 1 >= 0 and indice_final + 1 <= n - 1) {
        if (a[indice_inicio] > a[indice_final + 1] or
            a[indice_final] < a[indice_inicio - 1]) {
          cout << "no";
          return 0;
        }
      } else if (indice_inicio - 1 >= 0) {
        if (a[indice_inicio - 1] > a[indice_final]) {
          cout << "no";
          return 0;
        }
      } else if (indice_final + 1 <= n - 1) {
        if (a[indice_final + 1] < a[indice_inicio]) {
          cout << "no";
          return 0;
        }
      }
      subcadenatomada = true;
    } else {
      cout << "no";
      return 0;
    }
  }
  cout << "yes\n" << indice_inicio + 1 << " " << indice_final + 1;
  return 0;
}
