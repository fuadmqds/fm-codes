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
    
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        if (n == 1) {
            cout << 0;
        } else if (n == 2) {
            cout << m;
        } else {
            cout << m * 2;
        }
        cout << "\n";
    }
    return 0;
}
// FM

/*
1 100
{100}
2 2
{0, 2}
5 5
{0, 0, 5, 0, 0}
*/