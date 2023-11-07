#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, sum = 0, cuerda;
    cin >> n;
    getchar();
    char ch;
    for (int i = 0; i < n; i++) {
        ch = getchar();
        switch (ch)
        {
        case 'T':
            sum += 4;
            cuerda = 10;
            break;
        case 'C':
            sum += 6;
            cuerda = 3;
            break;
        case 'O':
            sum += 8;
            cuerda = 9;
            break;
        case 'D':
            sum += 12;
            cuerda = 11;
            break;
        case 'I':
            sum += 20;
            cuerda = 10;
            break;
        }
        while (cuerda != 0) {
            getchar();
            cuerda--;
        }

        if (i != n - 1)getchar();

    }

    cout << sum;


    return 0;
}
