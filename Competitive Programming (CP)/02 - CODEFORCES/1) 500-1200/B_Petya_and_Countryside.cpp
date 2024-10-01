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
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;

    int n, l, r, x, y, cnt = 1, max = -1;
    cin >> n;

    vc<int> h(n);
    for (int& i : h) cin >> i;

    for (int i = 0; i < n; ++i) {
        l = i - 1;
        r = i + 1;
        x = h[i];
        y = h[i];
        while (0 <= l && h[l] <= x) {
            cnt++;
            x = h[l--];
        }
        while (r < n && h[r] <= y) {
            cnt++;
            y = h[r++];
        }
        if (max < cnt) {
            max = cnt;
        }
        cnt = 1;
    }

    cout << max << '\n';
    return 0;
}
// FM