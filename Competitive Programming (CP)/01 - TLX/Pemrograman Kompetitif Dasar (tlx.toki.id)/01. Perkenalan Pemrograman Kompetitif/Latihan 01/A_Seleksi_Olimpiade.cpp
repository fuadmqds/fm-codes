#include <bits/stdc++.h>
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    int n, m;
    string find;
    bool ans = false;

    cin >> n >> m >> find;
    vector<pair<pair<int, int>, pair<int, string>>> v(n);
    // v.se.se = ID, v.se.fi = session 1, v.fi.se = session 2, v.fi.fi = session 3.

    for (int i = 0; i < n; i++) {
        cin >> v[i].se.se >> v[i].se.fi >> v[i].fi.se >> v[i].fi.fi;
    }

    // Sorting vector pair (yeah, you can do it)
    sort(v.begin(), v.end());

    for (int i = n-1; i >= n-m; i--) {
        if (find == v[i].se.se) {
            ans = true;
            break;
        }
    }
    
    if (ans) cout << "YA" << endl;
    else cout << "TIDAK" << endl;
}

int main() {
    Bismillah;

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// FM



// Another solution
/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

struct participant {
    string id;
    int s1, s2, s3;
};

bool comp(participant a, participant b) {
    if (a.s3 != b.s3) {
        return a.s3 > b.s3;
    } else if (a.s2 != b.s2) {
        return a.s2 > b.s2;
    } else {
        return a.s1 > b.s1;
    }
}

int main() {
    Bismillah;
    
    int t, n, m;
    string find;

    cin >> t;
    while (t--) {
        cin >> n >> m >> find;

        vector<participant> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i].id >> p[i].s1 >> p[i].s2 >> p[i].s3;
        }

        sort(p.begin(), p.end(), comp);

        bool ans = false;
        for (int i = 0; i < m; i++) {
            if (p[i].id == find) {
                ans = true;
                break;
            }
        }

        if (ans) cout << "YA" << endl;
        else cout << "TIDAK" << endl;
    }
    return 0;
}
// FM
*/

/*
#include <bits/stdc++.h>
#define fi first 
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t, n, m, idxFind;
    string find;

    cin >> t;
    while (t--) {
        cin >> n >> m >> find;

        vector<pair<string, int>> v(n);
        for (int i = 0; i < n; i++) {
            int s1, s2, s3;

            cin >> v[i].fi >> s1 >> s2 >> s3;
            v[i].se = s1 + s2 * 501 + s3 * 501501;

            if (v[i].fi == find) idxFind = i;
        }

        bool ans = true;
        for (int i = 0; i < n; i++) {
            if (v[idxFind].se <= v[i].se) {
                m--;
            }
            if (m < 0) {
                ans = false;
                break;
            }
        }

        if (ans) puts("YA");
        else puts("TIDAK");
    }
    return 0;
}
// FM
*/