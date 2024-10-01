#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    int ls = s.length();
    for (int i = 0; i < ls; i++) {
        if (s[i] < 'a') {
            s[i] += 'a' - 'A';
        }
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'y') {
            s.erase(i, 1);
            i--;
        }
        ls = s.length();
    }

    for (int i = 0; i < ls; i++) {
        cout << '.' << s[i];
    }
    return 0;
}