#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int n, q, x, y;
vector<int> v;

// Find the index of the smallest element that is greater than x
// Find the index of the greatest element that is smaller than or equal to y
int BinarySearch(int range) {
    int ans = 0, l = 1, r = n, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (v[mid] <= range) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

void solve() {
    cin >> x >> y;
    
    // Inclusion-Exclusion
    cout << BinarySearch(y) - BinarySearch(x) << endl;
}

int main() {
    Bismillah;

    cin >> n;
    v.push_back(0);
    for (int i = 1; i <= n; i++) {
        int h; cin >> h;
        v.push_back(h);
    }

    cin >> q;
    while (q--) {
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

int main() {
    Bismillah;

    int n, t, x, y; 
    cin >> n;

    int duck[n];
    for (int i = 0; i < n; i++) {
        cin >> duck[i];
    }

    cin >> t;
    while (t--) {
        cin >> x >> y;
        
        auto l = upper_bound(duck, duck + n, x);
        auto r = upper_bound(duck, duck + n, y);

        cout << r - l << endl;
    }
    return 0;
}
*/