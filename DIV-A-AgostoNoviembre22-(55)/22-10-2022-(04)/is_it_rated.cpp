#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, menor = 5000;
    scanf("%d", &n);
    bool rated = false, unrated = false;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a != b) {
            rated = true;
        }
        else if (menor < a) {
            unrated = true;
        }
        menor = b;
    }
    if (rated) {
        cout << "rated";
    }
    else if (unrated) {
        cout << "unrated";
    }
    else {
        cout << "maybe";
    }

    return 0;
}
