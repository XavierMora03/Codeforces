#include <string.h>

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  char arr[10000];
  cin.getline(arr, 10000);
  int ch = 97;
  int contador[26];
  for (int i = 0; i < 26; i++) contador[i] = 0;

  int i = 1;
  while ((ch = arr[i]) >= 97 and ch <= 122) {
    contador[ch - 97]++;
    i += 3;
  }
  int distint_letters = 0;
  for (int i = 0; i < 26; i++)
    if (contador[i] > 0) distint_letters++;
  cout << distint_letters;
  return 0;
}
