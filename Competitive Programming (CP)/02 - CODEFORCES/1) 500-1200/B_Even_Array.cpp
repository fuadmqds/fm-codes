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
    
    int t, n;
    cin >> t;
    
    while (t--) {
        int cnt1 = 0, cnt0 = 0, wr = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (a % 2 == 0) {
                cnt0++;
            } else {
                cnt1++;
            }
            if (i % 2 != a % 2) {
                wr++;
            }
        }

        if (n == 1 && wr == 1) {
            cout << -1 << endl;
            continue;
        } else if (n % 2 == 0 && cnt1 != cnt0 || n % 2 == 1 && cnt0 - cnt1 != 1) {
            cout << -1 << endl;
        } else {
            cout << wr / 2 << endl;
        }
    }
    return 0;
}
// FM