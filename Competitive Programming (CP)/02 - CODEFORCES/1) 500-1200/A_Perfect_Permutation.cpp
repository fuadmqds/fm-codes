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
    
    int n;
    cin >> n;

    if (n & 1) {
        cout << -1;
        return 0;
    }

    // 1 2 3 4
    // 2 1 4 3
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            cout << i + 1;
        } else {
            cout << i - 1;
        }
        cout << ' ';
    }
    return 0;
}
// FM