#include <iostream>
#define TAMANIO 101
int main() {
  int n;
  scanf("%d", &n);
  getchar();
  int cambios_de_uniforme = 0;
  int colores_visita[101];
  int colores_casa[101];
  for (int i = 0; i < 101; i++) {
    colores_casa[i] = 0;
    colores_visita[i] = 0;
  }
  for (int i(0); i < n; i++) {
    int h, a;
    scanf("%d %d", &h, &a);
    getchar();
    colores_visita[a]++;
    colores_casa[h]++;
  }
  for (int i = 0; i < 101; i++) {
    cambios_de_uniforme += colores_casa[i] * colores_visita[i];
  }

  printf("%d", cambios_de_uniforme);
  return 0;
}
