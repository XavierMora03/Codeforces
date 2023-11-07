#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int columns;
  cin >> columns;

  int heigts[columns];
  for (int i = 0; i < columns; i++) {
    cin >> heigts[i];
  }

  bool hasChanged = false;
  while (!hasChanged) {
    hasChanged = true;
    for (int i = 1; i < columns; i++) {
      if (heigts[i - 1] > heigts[i]) {
        int diference = heigts[i - 1] - heigts[i];
        heigts[i] += diference;
        heigts[i - 1] -= diference;

        hasChanged = false;
      }
    }
  }

  for (int i = 0; i < columns; i++) {
    cout << heigts[i] << " ";
  }

  return 0;
}