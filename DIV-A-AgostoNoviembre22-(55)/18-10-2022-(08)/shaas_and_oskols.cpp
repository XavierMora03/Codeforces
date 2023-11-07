#include <string.h>

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  long n, big, full;
  scanf("%d %d %d", &n, &big, &full);
  int a[n];
  getchar();
  int tina = 0;
  int flusher = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    getchar();
    if (a[i] > big) continue;
    tina += a[i];
    if (tina > full) {
      tina = 0;
      flusher++;
    }
  }

  printf("%d", flusher);

  return 0;
}
