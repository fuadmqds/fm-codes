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
        cin >> n;

        int a, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;

            if (a == 1) cnt1++;
            else cnt2++;
        }

        if (cnt1 & 1 || cnt1 == 0 && cnt2 & 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
// FM