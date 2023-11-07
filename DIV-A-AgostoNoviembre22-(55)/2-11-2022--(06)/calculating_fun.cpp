#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    ll l;
    cin >> l;

    if (l % 2 == 0) {
        cout << l / 2;
    }
    else {
        cout << -1 * ((l + 1) / 2);
    }
    return 0;
}
