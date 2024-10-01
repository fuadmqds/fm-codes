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
    
    int n; cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;

        if (a != b) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
// FM

/*
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
    
    int n; cin >> n;
    vector<pair<int,int>> lp(n);

    for (int i = 0; i < n; i++) {
        cin >> lp[i].fi >> lp[i].se;
    }

    sort(lp.begin(), lp.end());
    for (int i = 0; i < n-1; i++) {
        if (lp[i].fi == lp[i+1].fi) continue;
        if (lp[i].se > lp[i+1].se) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
// FM
*/