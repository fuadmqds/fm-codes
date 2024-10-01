// O(N) Solution
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

int KanadeAlgorithm(vc<int> v, int n) {
    int max_current = v[0], max_global = v[0];

    for (int i = 1; i < n; i++) {
        max_current = max(v[i], max_current + v[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }
    return max_global;
}

int main() {
    Bismillah;

    int n, ones = 0;
    cin >> n;

    vc<int> a(n);
    vc<int> b(n);

    for (int& i : a) cin >> i;

    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            ones++;
            b[i] = -1;
        }
        else {
            b[i] = 1;
        }
    }

    int gain = KanadeAlgorithm(b, n);
    cout << ones + gain << endl;
    return 0;
}
// FM

/*
// O(N^3) Solution
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

void solve() {
    int n, ans = 0;
    cin >> n;
    vc<int> a(n);

    for (int& i : a) cin >> i;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int cnt = 0;
            for (int k = i; k <= j; k++) {
                a[k] = 1 - a[k];
            }

            for (int p : a) {
                if (p == 1) cnt++;
            }

            ans = max(ans, cnt);

            for (int k = i; k <= j; k++) {
                a[k] = 1 - a[k];
            }
        }
    }

    cout << ans << endl;
}

int main() {
    Bismillah;

    solve();
    return 0;
}
// FM
*/