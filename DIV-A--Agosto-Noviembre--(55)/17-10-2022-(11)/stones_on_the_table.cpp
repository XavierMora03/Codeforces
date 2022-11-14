#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  char anterior = getchar();
  int a_borrar = 0;
  for (int i = 1; i <= n; i++) {
    char ch = getchar();
    if (ch == anterior) a_borrar++;
    anterior = ch;
  }

  cout << a_borrar;

  return 0;
}
