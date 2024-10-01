#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define out(a, b) cout << a << ' ' << b << endl;
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;
    
    int n;
    cin >> n;

    deque <int> d;
    for (int i = 0; i < n; i++) {
        str s;
        int e;
        cin >> s;
        if (s == "push_back") {
            cin >> e;
            d.push_back(e);
        } else if (s == "push_front") {
            cin >> e;
            d.push_front(e);
        } else if (s == "pop_back") {
            d.pop_back();
        } else if (s == "pop_front") {
            d.pop_front();
        }
    }

    for (int i : d) {
        cout << i << '\n';
    }
    return 0;
}
// FM