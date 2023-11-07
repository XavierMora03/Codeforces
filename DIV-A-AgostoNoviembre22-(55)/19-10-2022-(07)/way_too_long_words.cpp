#include <string.h>

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  char a[n][101];
  for (int i = 0; i < n; i++) {
    scanf("%s", &a[i]);
    getchar();
    int size = strlen(a[i]);
    if (size > 10) {
      int between = size - 2;
      if (between >= 1 and between <= 9) {
        a[i][1] = char(between + 48);
        a[i][2] = a[i][size - 1];
        a[i][3] = '\0';
      }
      if (between >= 10 and between <= 99) {
        string num = to_string(between);
        a[i][1] = num[0];
        a[i][2] = num[1];
        a[i][3] = a[i][size - 1];
        a[i][4] = '\0';
      }
      /*if(between{
        a[i][1] = '1';
        a[i][2] = '0';
        a[i][3] = '0';
        a[i][4] = a[i][size - 1];
        a[i][5] = '\0';
      }*/
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%s\n", a[i]);
  }

  return 0;
}
