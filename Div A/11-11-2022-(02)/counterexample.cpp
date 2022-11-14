#include <iostream>
using namespace std;
using ll = long long;

ll mcd(ll a, ll b) {
  if (b == 0) return a;
  return mcd(b, a % b);
}

int main() {
  ll r, l;
  cin >> l;
  cin >> r;

  ll inicial = l, medio, final;
  int cont = 0;
  int cont2 = 0;
  int limite = 20;
  while (inicial <= r - 2) {
    cont = 0;
    medio = inicial + 1;
    while (cont < limite) {
      if (mcd(inicial, medio) == 1) {
        cont2 = 0;
        final = medio + 1;
        while (cont2 < limite) {
          if (mcd(medio, final) == 1) {
            if ((mcd(inicial, final) != 1) and (final <= r)) {
              cout << inicial << " " << medio << " " << final;
              return 0;
            }
          }
          final++;
          cont2++;
        }
      }
      medio++;
      cont++;
    }
    inicial++;
  }

  cout << "-1";
  return 0;
}
