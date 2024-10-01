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
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0)

/*
n = 5
s = 12345

(1 - 0) * 5 + (12 - 1) * 4 + (123 - 12) * 3 + (1234 - 123) * 2 + (12345 - 1234) * 1 = 13715
(1 * 5) + (12 * 4) - (1 * 4) + (123 * 3) - (12 * 3) + (1234 * 2) - (123 * 2) + (12345 * 1) - (1234 * 1) = 13715
1 + 12 + 123 + 1234 + 12345 = 13715
*/

void solve() {
    int n;
    str s;
    cin >> n >> s;

    int tmp = 0;
    vc<int> a(n), ans(n); // reverse
    for (int i = 0; i < n; ++i) {
        tmp += s[i] - '0';
        a[n - i - 1] = tmp;
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] >= 10) {
            int move = a[i] / 10;
            int stay = a[i] % 10;
            a[i] = stay;
            if (i == n - 1) { a.pb(move); }
            else { a[i + 1] += move; }
        }
    }
    while (a.size() > 1 && a.back() == 0) {
        a.ppb();
    }
    for (int i = a.size() - 1; i >= 0; --i) {
        cout << a[i];
    }
    cout << '\n';
}

int main() {
    Bismillah;

    int t;
    cin >> t;
    while (t--) { solve(); }
    return 0;
}
// FM