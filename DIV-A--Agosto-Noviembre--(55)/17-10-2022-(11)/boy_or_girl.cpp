
#include <iostream>
#include <vector>
using namespace std;
int main() {
  string name;
  vector<int> checked;

  cin >> name;
  if (name[name.size() - 1] == '\n') cout << "NOOOOOOOO";
  for (int i = 0; i < name.size(); i++) {
    bool isInVector = false;
    for (int j = 0; j < checked.size(); j++) {
      if (checked.at(j) == name[i]) {
        isInVector = true;
        break;
      }
    }
    if (!isInVector) checked.push_back(name[i]);
  }

  if (!(checked.size() % 2)) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }

  return 0;
}
