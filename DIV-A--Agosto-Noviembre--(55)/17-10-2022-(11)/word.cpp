
#include <cctype>
#include <iostream>
using namespace std;
int main() {
  string word;
  int lower = 0, upper = 0;
  cin >> word;
  for (int i = 0; i < word.size(); i++) {
    if (word[i] >= 60 and word[i] <= 90) {
      upper++;
    } else {
      lower++;
    }
  }

  bool tolowerSTR;
  if (lower >= upper) {
    tolowerSTR = true;
  } else {
    tolowerSTR = false;
  }

  for (int i = 0; i < word.size(); i++) {
    word[i] = (tolowerSTR) ? tolower(word[i]) : toupper(word[i]);
  }

  cout << word;
  return 0;
}
