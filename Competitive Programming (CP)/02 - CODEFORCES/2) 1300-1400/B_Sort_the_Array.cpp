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

    int n, l = 0, r = 0;
    cin >> n;
    vc<int> a(n);

    for (int &i : a) {
        cin >> i;
    }
    
    vc<int> b = a;
    sort(all(b));

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            l = i;
            break;
        }
    }

    for (int i = n-1; i >= 0; i--) {
        if (a[i] != b[i]) {
            r = i;
            break;
        }
    }

    for (int i = l; i < r; i++) {
        if (a[i] < a[i+1]) {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n" << l+1 << ' ' << r+1 << endl;
    return 0;
}
// FM