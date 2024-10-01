#include <bits/stdc++.h>
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, x;
    cin >> n >> x;

    vector<pair<double, pair<int, int>>> v(n);
    // v[i].se.fi is the i-th weight
    // v[i].se.se is the i-th price/value

    for (int i = 0; i < n; i++) {
        cin >> v[i].se.fi;
    }

    for (int i = 0; i < n; i++) {
        cin >> v[i].se.se;
      
        v[i].fi = (v[i].se.se * 1.0) / (v[i].se.fi * 1.0);
    }

    // Sort the the sack
    for (int i = n-1; i >= 0; i--) {
        int pos = i;
        while (pos < n-1 && v[pos] < v[pos+1]) {
            swap(v[pos], v[pos+1]);
            pos++;
        }
    }

    double val = 0.0;
    int curX = 0;    
    for (int i = 0; i < n; i++) {
        if (curX + v[i].se.fi < x) {
            curX += v[i].se.fi;
            val += v[i].se.se;
        } else {
            val += ((x - curX) * 1.0) / (v[i].se.fi * 1.0) * (v[i].se.se * 1.0);
            break;
        }
    }

    cout << fixed << setprecision(5) << val << endl;
    return 0;
}
// FM



// Another solution (more optimal)
/*
#include <bits/stdc++.h>
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, x;
    cin >> n >> x;

    vector<pair<double, pair<int, int>>> v(n);
    // v[i].se.fi is the i-th weight
    // v[i].se.se is the i-th price/value

    for (int i = 0; i < n; i++) {
        cin >> v[i].se.fi;
    }

    for (int i = 0; i < n; i++) {
        cin >> v[i].se.se;
      
        v[i].fi = (v[i].se.se * 1.0) / (v[i].se.fi * 1.0);
    }

    // Sort the the sack
    sort(v.begin(), v.end(), greater<pair<double, pair<int, int>>>());
    // Another way to do it
    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());

    double val = 0.0;
    int curX = 0;    
    for (int i = 0; i < n; i++) {
        if (curX + v[i].se.fi < x) {
            curX += v[i].se.fi;
            val += v[i].se.se;
        } else {
            val += ((x - curX) * 1.0) / (v[i].se.fi * 1.0) * (v[i].se.se * 1.0);
            break;
        }
    }

    cout << fixed << setprecision(5) << val << endl;
    return 0;
}
// FM
*/