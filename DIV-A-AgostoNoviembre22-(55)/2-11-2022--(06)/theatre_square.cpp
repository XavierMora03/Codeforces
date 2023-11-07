#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int m, n, a;
    cin >> m >> n >> a;
    cout << ll(ceil(1.0 * m / a) * ceil(1.0 * n / a));
    return 0;
}
