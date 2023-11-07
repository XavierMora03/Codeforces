#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll = long long;

struct line {
  string n1;
  string n2;
  vector<string> res_list;
  string final_res;
} aux_line;

int main() {
  vector<line> llist;

  while (cin >> aux_line.n1 && (!aux_line.n1.empty())) {
    cin >> aux_line.n2;

    // hacemos que la primera sea siempre la mas grande
    if (aux_line.n2.size() > aux_line.n1.size()) {
      swap(aux_line.n2, aux_line.n1);
    }
    for (int i(aux_line.n2.size() - 1); i >= 0; i--) {
      string str_aux_digit;
      str_aux_digit = aux_line.n2.at(i);
      int digit = stoi(str_aux_digit);

      int j(0);
      string res;
      int acarreo(0);
      int LAST_INDEX = aux_line.n1.size() - 1;
      string onedigit;
      while (aux_line.n1.size() > j) {
        onedigit = aux_line.n1.at(LAST_INDEX - j++);
        int product = stoi(onedigit) * digit + acarreo;
        res.insert(0, to_string(product % 10));
        acarreo = product / 10;
      }
      if (acarreo != 0)
        res.insert(0, to_string(acarreo));
      aux_line.res_list.push_back(res);
      res.clear();
    }
    for (vector<string>::iterator i = aux_line.res_list.begin();
         i != aux_line.res_list.end(); i++)
      cout << *i << endl;

    llist.push_back(aux_line);

    bool stillHaveDigits = true;

    int acarreo_suma = 0;
    while (stillHaveDigits) {

      for (int l = 0; l < aux_line.res_list.size(); l++) {
        int ite = 0;
        string digit_sum;
        int sum_digit = 0;
        int l_copy = l;
        while (l_copy) {
          // ojo aqui
          if (aux_line.res_list.size() > ite) {
            int curr_index = aux_line.res_list.at(ite).size() - 1 - ite;
            if (curr_index > 0) {
              digit_sum = aux_line.res_list.at(ite);
              sum_digit += stoi(digit_sum);
            }
            ite++;
          }
          digit_sum += acarreo_suma;
          aux_line.final_res.insert(0, to_string(sum_digit % 10));
          acarreo_suma = sum_digit / 10;
        }
      }
      aux_line.final_res = 3;
    }

    aux_line.n1.clear();
    aux_line.n2.clear();
    aux_line.res_list.clear();
  }

  return 0;
}
