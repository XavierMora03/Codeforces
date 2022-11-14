#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    char a[n + 1];
    scanf("%s", &a);

    bool letras[26];
    for (int i = 0; i < 26; i++)
        letras[i] = false;
    for (int i = 0; i < n; i++)
    {
        int ch = a[i];
        if (ch <= 90) ch += 32;
        letras[ch - 97] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!letras[i]) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");




    return 0;
}
