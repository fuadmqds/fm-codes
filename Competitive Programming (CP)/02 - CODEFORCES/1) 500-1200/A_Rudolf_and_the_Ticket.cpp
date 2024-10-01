#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first,
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        vc <int> v1(n);
        vc <int> v2(m);

        for (int &i : v1) {
            cin >> i;
        }
        for (int &j : v2) {
            cin >> j;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v1[i] + v2[j] <= k) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
// FM