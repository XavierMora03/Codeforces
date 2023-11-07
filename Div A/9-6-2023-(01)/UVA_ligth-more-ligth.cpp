#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;

struct prime {
  ll n;
  short times = 0;
};
vector<prime> li;
void calcFactors(ll n) {
  prime sh;
  int i = 2;
  // tendriamos que checar max raiz de n, para ver si es  n es compuesto
  while (i * i <= n) {
    sh.n = i;
    sh.times = 0;

    while (n % i == 0) {
      sh.times++;
      n /= i;
    }
    // solo lo metemos si es un factor
    if (sh.times != 0) {
      li.push_back(sh);
    }

    i++;
  }

  // esto es por si se nos quedo un numero primo
  if (n > 1) {
    sh.n = n;
    sh.times = 1;
    li.push_back(sh);
  }
}

bool calcDivisors(ll n) {
  calcFactors(n);
  ll mul = 1;
  for (int i(0); i < li.size(); i++) {
    mul *= (li.at(i).times + 1);
  }
  // cout<<mul;
  return mul % 2;
}
int main() {
  ll n;
  cin >> n;
  while (n != 0) {
    if (calcDivisors(n)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
    li.clear();
    cin >> n;
  }
  return 0;
}
