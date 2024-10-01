#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n; float ans;
    cin >> n;

    vector<int> v(n);
    for (int &i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());

    if (n % 2 == 1) {
        ans = v[n / 2];
    } else {
        ans = (v[n / 2] + v[n / 2 - 1]) * 0.5;
    }

    cout << fixed << setprecision(1) << ans << endl;
    return 0;
}
// FM



/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int n;
float ans;
vector<int> v;

void solve() {
    sort(v.begin(), v.end());
    if (n % 2 == 1) {
        ans = v[n / 2] * 1.0;
    } else {
        ans = (v[n / 2] + v[n / 2 - 1]) * 0.5;
    }
    cout << fixed << setprecision(1) << ans << endl;
}

int main() {
    Bismillah;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    solve();
    return 0;
}
// FM
*/