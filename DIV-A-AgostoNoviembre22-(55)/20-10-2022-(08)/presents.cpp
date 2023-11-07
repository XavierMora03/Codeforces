#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  short a[n + 1];
  short aux;
  for (int i(1); i <= n; i++) {
    scanf("%hu", &aux);
    a[aux] = i;
  }

  for (int i(1); i <= n; i++) printf("%hu ", a[i]);

  return 0;
}
