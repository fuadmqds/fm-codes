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

    vc<int> a(n);
    vc<int> b(n-1);
    vc<int> c(n-2);

    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    for (int &i : c) cin >> i;

    sort(all(a));
    sort(all(b));
    sort(all(c));

    int x = -1, y = -1;
    for (int i = 0; i < n-1; i++) {
        if (a[i] != b[i]) {
            x = a[i];
            break;
        }
    }

    if (x == -1) x = a[n-1];

    for (int i = 0; i < n - 2; i++) {
        if (b[i] != c[i]) {
            y = b[i];
            break;
        }
    }

    if (y == -1) y = b[n-2];

    cout << x << "\n" << y;
    return 0;
}
// FM