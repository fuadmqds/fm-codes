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
    
    int t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;

        vc <int> a(n);
        vc <int> b(n);

        for (int &i : a) {
            cin >> i;
        }
        for (int &j : b) {
            cin >> j;
        }

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        for (int i = 0; i < k; i++) {
            if (b[i] > a[i]) {
                swap(b[i], a[i]);
            }
        }
        
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        cout << sum << endl;
    }
    return 0;
}
// FM