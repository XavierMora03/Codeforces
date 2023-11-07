#include <string.h>

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  char arr[1000];
  scanf("%s", &arr);
  getchar();

  int i = 0, j = strlen(arr) - 1;
  int siguiente_no_uno = 0;
  while (i < j) {
    if (arr[i] == '1') {
      i += 2;
      siguiente_no_uno = i;
      continue;
    }
    if (arr[j] != '1') {  // igual a 2 o a 3 ahi los dejamos
      j -= 2;
      continue;
    }
    // tengo un  dos o tres al inicio, y uno al final
    char aux = arr[i];
    arr[i] = arr[j];
    arr[j] = aux;
  }
  i = siguiente_no_uno;
  j = strlen(arr) - 1;
  while (i < j) {
    if (arr[i] == '1') {
      i += 2;
      continue;
    }
    if (arr[i] == '2') {
      i += 2;
      continue;
    }
    if (arr[j] != '2') {  // igual a 2 o a 3 ahi los dejamos
      j -= 2;
      continue;
    }
    // tengo un  dos o tres al inicio, y uno al final
    char aux = arr[i];
    arr[i] = arr[j];
    arr[j] = aux;
  }
  cout << arr << endl;

  return 0;
}
