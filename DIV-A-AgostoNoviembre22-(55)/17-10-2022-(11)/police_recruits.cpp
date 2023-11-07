#include <string.h>

#include <iostream>
using namespace std;
int main() {
  int a = 0, b = 0, c = 0, d = 0;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  char cadena[100000];
  scanf("%s", &cadena);
  getchar();
  int totalCal = 0;
  for (int i = 0; i < strlen(cadena); i++) {
    switch (cadena[i]) {
      case '1':
        totalCal += a;
        break;
      case '2':
        totalCal += b;
        break;
      case '3':
        totalCal += c;
        break;
      case '4':
        totalCal += d;
        break;
    }
  }
  cout << totalCal;
  return 0;
}
