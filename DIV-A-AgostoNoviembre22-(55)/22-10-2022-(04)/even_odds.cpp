#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);
    long long f1 = (1.0 * n + 1) / 2.0;
    if (k <= f1) {
        cout << 2 * k - 1;
    }
    else {
        cout << (k - f1) * 2;
    }

    return 0;
}
