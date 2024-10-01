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
#define out(a, b) cout << a << ' ' << b << endl
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0)

/*
Naive solution
-using three for loop 
-Complexity: O(N^3)

Better solution
-sort the array O(N log N)
-pick any number y O(N)
-use 2-sum solution to find x - y with 2 pointers O(N)
-Overall complexity: O(N^2 + N log N)
*/

int main() {
    Bismillah;

    int n, x;
    cin >> n >> x;

    vc<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].fi;
        v[i].se = i + 1;
    }
    sort(all(v));
    for (int i = 0; i < n; ++i) {
        int l = i + 1, r = n - 1, find = x - v[i].fi;
        while (l < r) {
            if ((ll)v[l].fi + v[r].fi == find) {
                cout << v[i].se << ' ' << v[l].se << ' ' << v[r].se << '\n';
                return 0;
            }
            else if ((ll)v[l].fi + v[r].fi > find) {
                r--;
            } else {
                l++;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
// FM