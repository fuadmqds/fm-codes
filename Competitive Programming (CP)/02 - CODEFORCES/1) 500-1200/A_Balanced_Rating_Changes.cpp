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
    
    int n, cnt = 0;
    cin >> n;

    vc<int> a(n);
    vc<int> idx;

    for (int &i : a) cin >> i;

    vc<int> b = a;

    for (int i = 0; i < n; i++) {
        if (b[i] & 1) {
            cnt++;
            idx.pb(i);
        }
        else {
            b[i] = b[i] / 2;
        }
    }

    bool tmp = false;
    for (int i = 0; i < cnt; i++) {
        if (i == cnt / 2) {
            tmp = true;
        }
        if (tmp) {
            b[idx[i]] = floor(b[idx[i]] * 0.5);
        } else {
            b[idx[i]] = ceil(b[idx[i]] * 0.5);
        }
    }

    for (int j : b) {
        cout << j << endl;
    }
    return 0;
}
// FM