#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ls = s.length();
    for (int i = 0; i < ls; i++) {
        if (s[i] != '_') {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 'a' - 'A';
            }
        } else {
            if (s[i+1] >= 'a' && s[i+1] <= 'z') {
                s[i+1] -= 'a' - 'A';
            }
            s.erase(i, 1);
        }
    }

    cout << s << endl;
    return 0;
}