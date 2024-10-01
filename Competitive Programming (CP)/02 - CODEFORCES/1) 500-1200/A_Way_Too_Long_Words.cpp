#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        int ls = s.length();
        if (ls <= 10) {
            cout << s << endl;
        } else {
            cout << s[0] << ls-2 << s[ls-1] << endl;
        }
    }
    return 0;
}