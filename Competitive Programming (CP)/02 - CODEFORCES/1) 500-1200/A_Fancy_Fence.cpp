#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

set<int> angle;

void solve() {
    int a; cin >> a;
    if (angle.find(a) != angle.end()) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main() {
    Bismillah;

    // Precompute
    int degree = 180;
    for (int i = 3;; i++) {
        if (degree / i == 179) {
            angle.insert(179);
            break;
        }
        if (degree % i == 0) {
            angle.insert(degree / i);
        }
        degree += 180;
    }
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM


/*
#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    set<int> angle{60, 90, 108, 120, 135, 140, 144, 150, 156, 160, 162, 165, 168, 170, 171, 172, 174, 175, 176, 177, 178, 179};

    int t, a;
    cin >> t;
    while (t--) {
        cin >> a;
        if (angle.find(a) != angle.end()) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
    return 0;
}
// FM
*/