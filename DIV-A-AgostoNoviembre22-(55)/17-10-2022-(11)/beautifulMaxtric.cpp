#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a[5][5];
  int x, y;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> a[i][j];
      if (a[i][j] == 1) {
        x = i;
        y = j;
      }
    }
    cout << abs(2 - x) + abs(2 - y);
    return 0;
  }