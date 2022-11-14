#include <string.h>

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  char camino[52];
  char instrucciones[52];

  cin >> camino >> instrucciones;
  int pos = 0;

  int nInstrucciones = strlen(instrucciones);
  int ins_i = 0;
  while (ins_i < nInstrucciones) {
    if (camino[pos] == instrucciones[ins_i]) pos++;
    ins_i++;
  }
  cout << pos + 1;
  return 0;
}
