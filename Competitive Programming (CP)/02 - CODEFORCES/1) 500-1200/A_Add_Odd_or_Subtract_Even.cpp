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

void solve() {
    int a, b;
    cin >> a >> b;

    /*
    operation:
    1. plus a by odd number x
    2. minus a by even number y
    res a   b       a is smaller/greater/equal than/to b
    0   any any     equal
    2   odd odd     smaller
    1   odd even    smaller
    1   even odd    smaller
    2   even even   smaller
    1   odd odd     greater
    2   odd even    greater
    2   even odd    greater
    1   even even   greater
    */
   
    if (a == b) {
        cout << 0;
    } else if (a < b) {
        if (a % 2 == b % 2) {
            cout << 2;
        } else {
            cout << 1;
        }
    } else {
        if (a % 2 == b % 2) {
            cout << 1;
        } else {
            cout << 2;
        }
    }
    cout << "\n";
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM