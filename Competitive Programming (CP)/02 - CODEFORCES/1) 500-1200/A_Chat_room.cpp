#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; cin >> s;
    char word[5] = {'h', 'e', 'l', 'l', 'o'};

    int idx = 0;
    int ls = s.length();
    for (int i = 0; i < ls; i++) {
        if (s[i] == word[idx]) {
            idx++;
        }
        if (idx == 5) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}