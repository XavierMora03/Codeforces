#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    int p[100] = { 1,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53 };
    for (int i = 0; i < 16; i++)
    {
        if (n == p[i] && m == p[i + 1]) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
