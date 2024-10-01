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
    
    int t;
    cin >> t;

    while (t--) {
        int n, min = 0, mpl = 1;
        cin >> n;
        vc<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[min] > a[i]) min = i;
        }
        a[min] += 1;
        for (int i : a) {
            mpl *= i;
        }
        cout << mpl << endl;
    }
    return 0;
}
// FM