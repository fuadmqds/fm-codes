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

void solve() {
    int n, x = 0, y = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'U') y++;
        else if (s[i] == 'R') x++;
        else if (s[i] == 'L') x--;
        else if (s[i] == 'D') y--;

        if (x == 1 && y == 1) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM

/*
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

void solve() {
    int n;
    string s;
    cin >> n >> s;

    pair<int, int> cur(0, 0); // (x, y)

    for (int i = 0; i < n; i++) {
        if (s[i] == 'U') cur.se++;
        else if (s[i] == 'R') cur.fi++;
        else if (s[i] == 'L') cur.fi--;
        else if (s[i] == 'D') cur.se--;

        if (cur.fi == 1 && cur.se ==) {
            cout << "yes\n";
            return;
        }
    }
    cout << "no\n";
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM
*/