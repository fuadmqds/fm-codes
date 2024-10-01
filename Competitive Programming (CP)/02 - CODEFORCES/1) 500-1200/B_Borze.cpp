#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ls = s.length();
    for (int i = 0; i < ls;) {
        string sub = s.substr(i, 2);
        if (s[i] == '.') {
            cout << 0;
            i++;
        } else if (sub == "-.") {
            cout << 1;
            i += 2;
        } else {
            cout << 2;
            i += 2;
        }
    }
    return 0;
}