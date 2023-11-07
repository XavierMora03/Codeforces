#include <string.h>

#include <cstdlib>
#include <iostream>
int main() {
  char arr[10000];
  scanf("%s", &arr);
  int ultimoAIterar = strlen(arr) - 1;
  int anterior = 0;
  int saltosTotales = 0;
  for (int i(-1); i < ultimoAIterar; i++) {
    int siguiente = arr[i + 1] - 97;
    int saltos = abs(anterior - siguiente);
    if (saltos > 13) saltos = 26 - saltos;
    saltosTotales += saltos;
    anterior = siguiente;
  }
  printf("%d", saltosTotales);
  return 0;
}
