#include<bits/stdc++.h>

using namespace std;

int main() {

    char word[201];
    int i_word = 0, i = 0;
    char a[201];
    scanf("%s", &a);
    int last = strlen(a) - 1;
    while (i <= last) {
        if (i + 2 <= last && (a[i] == 'W' and a[i + 1] == 'U' and
            a[i + 2] == 'B')) {
            i += 3;
        }
        else {
            while (i <= last)
            {
                if (a[i] != 'W') {
                    word[i_word++] = a[i];
                }
                else if (i + 2 <= last && (a[i + 1] == 'U'
                    and a[i + 2] == 'B')) {
                    i += 3;
                    break;
                }
                else {
                    word[i_word++] = 'W';
                }
                i++;
            }
            word[i_word++] = ' ';
        }
    }
    word[i_word - 1] = '\0';
    printf("%s", word);
    return 0;
}
