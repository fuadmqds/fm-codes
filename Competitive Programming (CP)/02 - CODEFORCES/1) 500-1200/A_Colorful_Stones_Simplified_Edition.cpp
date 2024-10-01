#include <bits/stdc++.h>
#define semoga_ac ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

string s, t;
int cur = 1;

void solve() {
    cin >> s >> t;

    for (int i = 0; i < t.size(); i++) {
        if (t[i] == s[cur-1]) {
            cur++;
        }
    }

    cout << cur << endl;
}

int main() {
    semoga_ac;
    
    solve();
    return 0;
}