#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  getchar();
  getchar();
  int n;
  scanf("%d", &n);
  getchar();
  int a[n + 1];
  for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
  int mayor = n;
  int p(1), i(1);
  vector<int> b;
  while (i <= n) {
    if (a[i] == mayor) {
      printf("%d ", a[i]);
      mayor--;
      while (!b.empty() && b.back() == mayor) {
        printf("%d ", b.back());
        b.pop_back();
        mayor--;
      }
    }
    else {
      b.insert(std::upper_bound(b.begin(), b.end(), a[i]), a[i]);
    }
    printf("\n");
    i++;
  }
  return 0;
}
