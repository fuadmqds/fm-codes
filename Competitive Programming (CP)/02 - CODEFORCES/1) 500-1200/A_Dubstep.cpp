#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    int ls = s.length();
    bool space = false;
    for (int i = 0; i < ls; i++) {
        string sub = s.substr(i, 3);
        if (sub == "WUB") {
            if (!space) {
                cout << " ";
                space = true;
            }
            i += 2;
        } else {
            space = false;
            cout << s[i];
        }
    }
    return 0;
}