#include <string.h>

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a, b;
  cin >> a >> b;
  if (b > a) a = b;
  int numerador = 6 - a + 1;
  int denominador = 6;
  if (numerador % 2 == 0) {
    numerador /= 2;
    denominador /= 2;
  }
  if (numerador % 3 == 0) {
    numerador /= 3;
    denominador /= 3;
  }
  cout << numerador << "/" << denominador;
  return 0;
}
