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
#define endl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
    Bismillah;

    int n, x, y, ans = 0;

    cin >> n;
    vc<int> v(n);
    for (int& i : v) cin >> i;

    for (int i = 1; i < n; i++) {
        v[i] = v[i - 1] + v[i];
    }

    cin >> x >> y;
    for (int i = 1; i < n; i++) {
        if ((x <= v[i-1] && v[i-1] <= y) && (x <= v[n-1] - v[i-1] && v[n-1] - v[i-1] <= y)) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
// FM


/*
5
3 4 3 2 1
6 8


prefsum: 3 7 10 12 13
k = 1; 0 13
k = 2; 3 10
k = 3; 7 6
k = 4; 10 3
k = 5; 12 1
ans = mid;

2
2 5
3 6

prefsum: 2 7
k = 1; 0 7
k = 2; 2 5
*/