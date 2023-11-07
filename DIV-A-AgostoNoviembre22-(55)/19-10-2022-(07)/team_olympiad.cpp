#include <string.h>

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  getchar();
  int prog[n + 1], i_prog = 0;
  int deporte[n + 1], i_depor = 0;
  int math[n + 1], i_math = 0;
  for (int i = 1; i <= n; i++) {
    prog[i] = 0;
    deporte[i] = 0;
    math[i] = 0;
  }
  int ninos[n + 1];
  for (int i = 1; i <= n; i++) {
    scanf("%d", &ninos[i]);
    switch (ninos[i]) {
      case 1:
        prog[i_prog++] = i;
        break;
      case 2:
        deporte[i_depor++] = i;
        break;
      case 3:
        math[i_math++] = i;
        break;
    }
  }
  int n_equipos = min(i_math, min(i_prog, i_depor));
  cout << n_equipos << endl;
  i_depor--;
  i_math--;
  i_prog--;
  while (n_equipos) {
    printf("%d %d %d\n", prog[i_prog--], deporte[i_depor--], math[i_math--]);
    n_equipos--;
  }

  return 0;
}
