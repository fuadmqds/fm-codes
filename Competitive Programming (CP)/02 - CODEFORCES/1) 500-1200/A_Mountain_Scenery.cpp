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

    int n, k;
    cin >> n >> k;

    vc <int> y(2 * n + 1);
    for (int& i : y) {
        cin >> i;
    }

    for (int i = 0; i < n * 2 + 1; i++) {
        if (k > 0 && (i & 1)) {
            if (y[i - 1] < y[i] - 1 && y[i] - 1 > y[i + 1]) {
                y[i]--;
                k--;
            }
        }
        cout << y[i] << ' ';
    }
    return 0;
}
// FM