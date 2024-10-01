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
    
    int n, m;
    cin >> n >> m;

    vc <int> a(n);
    vc <int> l(m);
    map<int, int> cnt;
    vc <int> ans(n + 1, 0);

    for (int &i : a) {
        cin >> i;
    }
    
    for (int i = n-1; i >= 0; i--) {
        cnt[a[i]]++;
        ans[i+1] = cnt.size();
    }

    for (int &j : l) {
        cin >> j;
        cout << ans[j] << endl;
    }
    return 0;
}
// FM