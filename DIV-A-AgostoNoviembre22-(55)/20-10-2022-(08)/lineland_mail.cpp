#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  int n;
  scanf("%d", &n);
  long long a[n];
  for (int i(0); i < n; ++i) scanf("%lld", &a[i]);

  if (n == 1) {
    cout << a[0] << " " << a[1];
    return 0;
  }

  for (int i = 0; i < n; i++) {
    long long maxx = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
    long long minn = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));

    if (i == 0) {
      minn = abs(a[0] - a[1]);
    } else if (i == n - 1) {
      minn = abs(a[n - 1] - a[n - 2]);
    }
    printf("%lld %lld\n", minn, maxx);
  }

  return 0;
}
