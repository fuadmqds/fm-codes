#include <bits/stdc++.h>
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    int n = 4;
    vector<pair<pair<int, int>, pair<int, int>>> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i].se.se >> p[i].se.fi >> p[i].fi.se >> p[i].fi.fi;
    }

    sort(p.begin(), p.end());

    for (int i = 0; i < n; i++) {
        cout << p[i].se.se << " " << p[i].se.fi << " " << p[i].fi.se << " " << p[i].fi.fi << endl;
    }
}

int main() {
    Bismillah;
    
    solve();
}

/*
Input:
1 2 3 4
2 2 3 4
2 3 1 5
3 0 0 3

Output:
3 0 0 3
1 2 3 4
2 2 3 4
2 3 1 5
*/