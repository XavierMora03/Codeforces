#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int precio, k;
  cin >> precio >> k;
  int monedas_diez = precio / 10;
  int sobrante = monedas_diez % 10;

  int primos[] = {2, 3, 5, 7, 9};
  int mcd = 1;
  int i = 0;

  int sobrante_cpy = sobrante;
  int k_cpy = k;
  while (i < 5) {
    if (sobrante_cpy % primos[i] == 0 and k_cpy % primos[i] == 0) {
      sobrante_cpy /= primos[i];
      k_cpy /= primos[i];
      mcd *= primos[i];
      continue;
    }
    i++;
  }

  cout << sobrante_cpy << " " << k_cpy << " " << mcd;

  return 0;
}
