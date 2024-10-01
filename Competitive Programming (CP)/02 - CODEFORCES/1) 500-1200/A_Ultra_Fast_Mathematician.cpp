#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int ls = s1.length();
    string ans = {};
    for (int i = 0; i < ls; i++) {
        if (s1[i] != s2[i]) {
            ans += "1";
        } else {
            ans += "0";
        }
    }
    cout << ans << endl;
    return 0;
}