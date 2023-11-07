
#include <cctype>
#include <iostream>
using namespace std;
int main() {
  int size;
  cin >> size;
  int conjuntos = 1;

  string piece, anterior;
  cin >> piece;
  anterior = piece;
  for (int i = 1; i < size; i++) {
    cin >> piece;
    if (anterior != piece) {
      anterior = piece;
      conjuntos++;
    }
  }

  cout << conjuntos;

  return 0;
}
