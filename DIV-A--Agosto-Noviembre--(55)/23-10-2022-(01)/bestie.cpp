#include<bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
ll maximo_comun_divisor(ll a, ll b);
int main() {
    int t;
    cin >> t;
    int c = 0;
    int n;
    ll max, g;
    long results[t];
    for (int j(0);j < t;j++) {
        cin >> n;
        ll  a[n + 1];
        cin >> a[1];
        g = a[1];
        for (int i(2);i <= n;i++) {
            cin >> a[i];
            g = maximo_comun_divisor(g, a[i]);
        }

        if (g == 1) {
            results[c++] = 0;
        }
        else {
            results[c++] = n;
        }
    }



    for (int i = 0; i < t; i++)
    {
        cout << results[i] << endl;
    }



    return 0;
}
ll maximo_comun_divisor(ll a, ll b) {
    ll temporal;//Para no perder b
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}