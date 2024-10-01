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
    
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;

        int one = a - 1, two;
        if (b < c) {
            two = (c - b) + (c - 1);
        } else {
            two = b - 1;
        }

        if (one < two) {
            cout << 1;
        } else if (one > two) {
            cout << 2;
        } else {
            cout << 3;
        }
        cout << "\n";
    }
    return 0;
}
// FM