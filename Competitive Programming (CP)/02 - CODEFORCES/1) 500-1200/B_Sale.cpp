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
    
    int n, m, sum = 0;
    cin >> n >> m;
    vc <int> v(n);

    for (int &i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++) {
        if (v[i] < 0) sum += abs(v[i]);
    }
    
    cout << sum << endl;
    return 0;
}
// FM