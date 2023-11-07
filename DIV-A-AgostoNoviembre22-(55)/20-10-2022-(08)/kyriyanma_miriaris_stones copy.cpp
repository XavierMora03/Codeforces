#include <bits/stdc++.h>

#include <iostream>
using namespace std;
using ll = long;
int main() {
  ll n;
  scanf("%ld", &n);
  getchar();

  ll a[n], b[n];
  for (int i = 0; i < n; i++) {
    scanf("%ld", &a[i]);
    b[i] = a[i];
  }
  getchar();

  sort(b, b + n);
  ll instructions;
  scanf("%ld", &instructions);
  getchar();

  long long sol[instructions], l, r;
  int q;
  for (int i = 0; i < instructions; i++) {
    scanf("%d %ld %ld", &q, &l, &r);
    getchar();
    sol[i] = 0;
    if (q == 1) {
      for (int j = l - 1; j <= r - 1; j++) sol[i] += a[j];
    } else {
      for (int j = l - 1; j <= r - 1; j++) sol[i] += b[j];
    }
  }

  for (int i = 0; i < instructions; i++) {
    printf("%lld\n", sol[i]);
  }

  return 0;
}
