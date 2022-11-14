#include<bits/stdc++.h>

using namespace std;

int main() {
    char diag, resto, curr;
    int n;
    cin >> n;
    getchar();
    bool not_gotten = true;
    bool is_x = true;
    if (n == 1) {
        cout << "NO";
        return 0;
    }
    diag = getchar();
    resto = getchar();
    if (diag == resto)is_x = false;

    for (int i = 2; i < n; i++)
    {
        curr = getchar();
        if (is_x) {
            if (i == n - 1) {
                if (curr != diag)
                    is_x = false;
            }
            else if (curr != resto) {
                is_x = false;
            }
        }
    }
    getchar();
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            curr = getchar();
            if (is_x) {
                if ((i == j || i + j == n - 1)) {
                    if (curr != diag)
                        is_x = false;
                }
                else if (curr != resto) {
                    is_x = false;
                }
            }
        }
        if (i != n - 1)getchar();
    }

    if (is_x) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
