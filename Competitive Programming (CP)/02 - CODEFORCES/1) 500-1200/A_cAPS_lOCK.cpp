#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  bool capslock = true;
  int ls = s.length();
  for (int i = 1; i < ls; i++) {
    if (s[i] >= 'a') {
        capslock = false;
    }
  }

  if (capslock) {
    for (int i = 0; i < ls; i++) {
        if (i == 0 && s[i] >= 'a') {
            s[i] -= 'a' - 'A';
        } else {
            s[i] += 'a' - 'A';
        }
    }
    cout << s << endl;
  } else {
    cout << s << endl;
  }
  return 0;
}