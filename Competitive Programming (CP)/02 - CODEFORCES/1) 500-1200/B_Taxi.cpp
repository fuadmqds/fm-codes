#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int taxis = 0, group[5] = {0};

  while (n--) {
    int s;
    cin >> s;
    group[s]++;
  }

  taxis += group[4];

  taxis += group[3];
  if (group[1] >= group[3]) {
    group[1] -= group[3];
  } else {
    group[1] = 0;
  }

  if (group[2] > 1) {
    taxis += group[2] / 2;
    if (group[2] % 2 == 1) {
      group[2] = 1;
      taxis++;
      if (group[1] > 0) {
        group[1] -= 2;
      }
      group[2] = 0;
    } else {
      group[2] = 0;
    }
  }

  if (group[1] > 0) {
    taxis += (group[1] + 3) / 4;
  } else if (group[2] > 0) {
    taxis += (group[2] + 1) / 2;
  }
  cout << taxis << endl;
  return 0;
}