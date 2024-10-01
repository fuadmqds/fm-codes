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

    int n, k, min = INT_MAX, sum = 0, idx = 0;
    cin >> n >> k;

    vc <int> v(n);
    for (int& i : v) {
        cin >> i;
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            for (int j = i; j < i + k; j++) {
                sum += v[j];
            }
        } else if (i <= n-k) {
            sum -= v[i-1];
            sum += v[i+k-1];
        }

        if (min > sum) {
            min = sum;
            idx = i;
        }
    }

    cout << idx + 1 << endl;
    return 0;
}
// FM