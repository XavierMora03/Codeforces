#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[4] = { 6,8,4,2 };
    unsigned long long l;
    cin >> l;

    if (l != 0) { cout << a[l % 4]; }
    else cout << "1";
    return 0;
}
