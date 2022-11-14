
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
    if (a[i] < a[i + 1]) {
      i++;
      continue;
    } else if (!subcadenatomada) {
      indice_inicio = i;
      while (a[i] > a[i + 1] and i < n - 1) {
        i++;
      }
      indice_final = i;
      subcadenatomada = true;
    } else {
      cout << "no";
      return 0;
    }
  }

  for (i = indice_inicio; i <= indice_final; i++) {
    printf("%lld", a[i]);
  }

  return 0;
}
