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
    
    int n, s = 1, c = 0;
    cin >> n;

    for (int i = 2; n - s >= 0; i++) {
        n -= s;
        c += 1;
        s += i;
    }
    cout << c << endl;
    return 0;
}
// FM