#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    int ls = s.length();
    for (int i = 0; i < ls-2; i += 2) {
        for (int j = 0; j < ls-2; j += 2) {
            if (s[j] > s[j+2]) {
                swap(s[j], s[j+2]);
            }
        }
    }
    cout << s << endl;
    return 0;
}