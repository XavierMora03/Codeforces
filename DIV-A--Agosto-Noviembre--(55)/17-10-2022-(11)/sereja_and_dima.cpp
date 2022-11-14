
#include <cctype>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  int arr[n];
  int serena = 0, digma = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int menor = 0, mayor = n - 1;
  int turn = 0;
  int cartaMayor;
  while (menor <= mayor) {
    if (arr[mayor] > arr[menor]) {
      cartaMayor = arr[mayor];
      mayor--;
    } else {
      cartaMayor = arr[menor];
      menor++;
    }

    if (turn % 2 == 0) {
      serena += cartaMayor;
    } else {
      digma += cartaMayor;
    }
    turn++;
  }
  cout << serena << " " << digma;

  return 0;
}
