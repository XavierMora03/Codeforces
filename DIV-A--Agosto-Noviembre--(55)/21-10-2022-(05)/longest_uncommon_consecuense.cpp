#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  char st1[100005];
  char st2[100005];
  scanf("%s\n%s", &st1, &st2);
  int s1 = strlen(st1);
  int s2 = strlen(st2);

  if (s1 != s2) {
    printf("%d", max(s1, s2));
    return 0;
  } else {
    for (int i = 0; i < s1; i++) {
      if (st1[i] != st2[i]) {
        printf("%d", s1);
        return 0;
      }
    }
    printf("%d", -1);
  }

  return 0;
}
