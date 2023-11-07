#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  double a[4];
  cin >> a[0] >> a[1] >> a[2] >> a[3];

  bool sin_cobrar = true;
  int veces_iguales_dos = 0;
  for (size_t l = 0; l < 4; l++) {
    int cont = 0;
    for (int i = 0; i < 4; i++) {
      if (a[l] == a[i]) cont++;
    }

    if (cont >= 3) {
      cout << cont - 1;
      return 0;
    }
    if (cont == 2) {
      sin_cobrar = false;
      veces_iguales_dos++;
    }
  }

  if (veces_iguales_dos != 0) {
    cout << veces_iguales_dos / 2;
  } else {
    cout << 0;
  }

  return 0;
}
