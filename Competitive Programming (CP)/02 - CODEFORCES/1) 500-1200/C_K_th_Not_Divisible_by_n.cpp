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

        cout << k + ((k-1) / (n-1)) << endl;
    }
    return 0;
}
// FM


/*
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
    
    ll t, n, k;
    cin >> t;

    while (t--) {
        cin >> n >> k;

        cout << fixed << k + ((k + n - 2) / (n-1)) - 1 << endl;
    }
    return 0;
}
// FM
*/