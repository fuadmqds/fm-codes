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
        
        if (n & 1) cout << (n-1) / 2 << endl;
        else cout << n / 2 << endl;
    }
    return 0;
}
// FM