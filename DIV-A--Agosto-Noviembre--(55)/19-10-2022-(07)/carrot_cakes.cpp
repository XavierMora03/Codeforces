#include <cmath>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, t, k, d;
  cin >> n >> t >> k >> d;
  double t_un_horno = (ceil(double(n) / double(k))) * double(t);
  int minuto = 0;
  int pasteles = 0;
  while (pasteles < n) {
    minuto++;
    if (minuto % t == 0) pasteles += k;
    if ((minuto > d) and ((minuto - d) % t == 0)) pasteles += k;
  }
  if (t_un_horno > minuto) {
    cout << "YES";
  } else {
    cout << "NO";
    return 0;
  }
