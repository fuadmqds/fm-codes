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

    int n, a, cnt[3] = { 0 }; // chest, biceps, back
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (i % 3 == 0) {
            cnt[0] += a;
        }
        else if (i % 3 == 1) {
            cnt[1] += a;
        }
        else {
            cnt[2] += a;
        }
    }

    int mx = max(cnt[0], max(cnt[1], cnt[2]));

    if (mx == cnt[0]) {
        cout << "chest";
    }
    else if (mx == cnt[1]) {
        cout << "biceps";
    }
    else {
        cout << "back";
    }
    return 0;
}
// FM