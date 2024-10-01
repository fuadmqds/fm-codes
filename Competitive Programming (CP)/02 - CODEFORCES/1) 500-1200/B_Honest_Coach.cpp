#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t, n, a;
    cin >> t;

    while (t--) {
        cin >> n;
        int min = 9999;

        vc<int> a(n);
        for (int &i : a) {
            cin >> i;
        }

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (i == j) continue;
                if (min > abs(a[i] - a[j])) {
                    min = abs(a[i] - a[j]);
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}
// FM