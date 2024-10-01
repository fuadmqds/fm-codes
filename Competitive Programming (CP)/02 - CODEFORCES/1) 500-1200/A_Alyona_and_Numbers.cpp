#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, m;
    cin >> n >> m;
    int r = m % 5;

    long long cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (5 - (i % 5) <= r) {
            cnt += m / 5 + 1;
        } else {
            cnt += m / 5;
        }
    }
    cout << cnt << endl;
    return 0;
}
// FM