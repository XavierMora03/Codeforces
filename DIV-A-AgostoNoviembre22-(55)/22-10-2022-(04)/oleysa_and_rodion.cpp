#include<bits/stdc++.h>

using namespace std;
unsigned long long ala;
int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    char num[n + 1];
    num[n] = '\0';
    if (t == 10) {
        if (n == 1) {
            cout << -1;
            return 0;
        }
        num[0] = '1';
        for (int i = 1; i < n; i++)
        {
            num[i] = '0';
        }

    }
    else {
        for (int i = 0; i < n; i++)
        {
            num[i] = t + 48;
        }
    }

    printf("%s", num);



    return 0;
}
