#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    int q, op, zeros = 0;
    cin >> s >> q;

    vector<char> ch(s.size());
    for (int i = 0; i < s.size(); ++i) {
        ch[i] = s[i];
        if (s[i] == '0') zeros++;
    }

    int i, j;
    ll x, ans = 0;
    while (q--) {
        cin >> op;
        if (op == 1) {
            cin >> i >> x;
            if (ch[i-1] == '0') {
                zeros--;
                ans += x;
            }
        }
        else {
            cin >> i >> j >> x;
            char tmp = ch[i-1];
            ch[i-1] = ch[j-1];
            ch[j-1] = tmp;
            ans += x;
        }
    }

    cout << (zeros <= 0 ? ans : -1) << '\n';
    return 0;
}