#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    int m;
    string s;
    cin >> s >> m;

    vc<int> que(s.size(), 0);

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            que[i] = que[i-1] + 1;
        } else {
            que[i] = que[i-1];
        }
    }

    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        l--; r--;

        cout << que[r] - que[l] << endl;
    }   
    return 0;
}
// FM