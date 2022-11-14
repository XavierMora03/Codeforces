#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned short n, i(0);
    scanf("%hu", &n);
    getchar();
    int sum = 0, taken = 0;
    unsigned short a[n], c[101];
    for (i = 0;i < 101;i++)c[i] = 0;
    for (i = 0;i < n;i++) {
        scanf("%hu", &a[i]);
        c[a[i]]++;
        sum += a[i];
    }
    getchar();
    i = 100;
    int coins = 0;
    while (i > 0 && sum >= taken) {
        if (c[i] != 0) {
            taken += i;
            sum -= i;
            c[i]--;
            coins++;
            continue;
        }

        i--;
    }
    cout << coins;
    return 0;
}
