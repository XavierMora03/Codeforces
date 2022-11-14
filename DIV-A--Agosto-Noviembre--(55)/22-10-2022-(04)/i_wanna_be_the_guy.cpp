#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    scanf("%d", &n);
    bool levels[n];
    int i(0);
    for (i;i < n;i++)levels[i] = false;
    scanf("%d", &p);
    int aux;
    for (i = 0;i < p;i++) {
        scanf("%d", &aux);
        levels[aux - 1] = true;
    }
    scanf("%d", &q);
    for (i = 0;i < q;i++) {
        scanf("%d", &aux);
        levels[aux - 1] = true;
    }
    for (i = 0;i < n;i++) {
        if (!levels[i]) {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}
