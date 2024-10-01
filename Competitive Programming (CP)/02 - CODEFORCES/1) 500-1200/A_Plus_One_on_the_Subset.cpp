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
    
    int t, n, a;
    cin >> t;
    while (t--) {
        int max = INT_MIN, min = INT_MAX;
        cin >> n;
        while (n--) {
            cin >> a;
            if (max < a) max = a;
            if (min > a) min = a;
        }
        cout << max - min << endl;
    }
    return 0;
}
// FM