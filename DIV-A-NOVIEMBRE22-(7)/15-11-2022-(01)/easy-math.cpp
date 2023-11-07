#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct s {
  ll n, m, a, d, r;
};
int main() {
  int test;
  cin >> test;
  s st[test];
  for (int i = 0; i < test; i++) {
    cin >> st[i].n >> st[i].m >> st[i].a >> st[i].d;
    ll ran = 1 + -st[i].n + st[i].m;
    st[i].r = ran - (int(ran / st[i].a) + int(ran / (st[i].a + st[i].d)) +
                     int(ran / (st[i].a + (2 * st[i].d))) +
                     int(ran / (st[i].a + (3 * st[i].d))) +
                     int(ran / (st[i].a + (4 * st[i].d))));
  }

  for (int i = 0; i < test; i++) {
    cout << st[i].r << endl;
  }

  return 0;
}