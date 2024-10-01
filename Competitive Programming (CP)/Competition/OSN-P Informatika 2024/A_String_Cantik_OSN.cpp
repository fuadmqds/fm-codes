#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = -1;
    string s, t = "";
    cin >> s;

    for (char c : s) {
        if (c == 'O' || c == 'S' || c == 'N') {
            t += c;
        }
    }

    string t1 = "OSN";
    string u = "";
    int idx = 0;
    for (char c : t) {
        if (c == t1[idx]) {
            u += c;
            idx++;
            idx %= 3;
        }
    }
    ans = max(ans, (int)u.size());

    string t2 = "ONS";
    u = "";
    idx = 0;
    for (char c : t) {
        if (c == t2[idx]) {
            u += c;
            idx++;
            idx %= 3;
        }
    }
    ans = max(ans, (int)u.size());

    string t3 = "SON";
    u = "";
    idx = 0;
    for (char c : t) {
        if (c == t3[idx]) {
            u += c;
            idx++;
            idx %= 3;
        }
    }
    ans = max(ans, (int)u.size());

    string t4 = "SNO";
    u = "";
    idx = 0;
    for (char c : t) {
        if (c == t4[idx]) {
            u += c;
            idx++;
            idx %= 3;
        }
    }
    ans = max(ans, (int)u.size());

    string t5 = "NOS";
    u = "";
    idx = 0;
    for (char c : t) {
        if (c == t5[idx]) {
            u += c;
            idx++;
            idx %= 3;
        }
    }
    ans = max(ans, (int)u.size());

    string t6 = "NSO";
    u = "";
    idx = 0;
    for (char c : t) {
        if (c == t6[idx]) {
            u += c;
            idx++;
            idx %= 3;
        }
    }
    ans = max(ans, (int)u.size());

    if (ans < 3) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }
    return 0;
}