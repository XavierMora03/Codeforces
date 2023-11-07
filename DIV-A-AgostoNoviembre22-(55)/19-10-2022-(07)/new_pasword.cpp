#include <string.h>

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, dif;
  scanf("%d %d", &n, &dif);
  // creando diccionario
  char dic[dif];
  char pass[n + 1];
  int state_of_charact;
  for (int i = 0; i < n; i++) {
    pass[i] = state_of_charact + 97;
    state_of_charact++;
    if (state_of_charact > dif - 1) state_of_charact = 0;
  }
  pass[n] = '\0';
  cout << pass;

  return 0;
}
