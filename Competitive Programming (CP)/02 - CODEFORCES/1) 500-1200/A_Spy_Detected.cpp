#include <iostream>
using namespace std;
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        int n; cin >> n;
 
        int a[n+1];
        int hz[101] = {0};
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            hz[a[i]]++;
        }
 
        for (int i = 1; i <= n; i++) {
            if (hz[a[i]] == 1) {
                cout << i << endl;
                break;
            }
        }
    }
}

// Another Working Solution
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n; 
    cin >> n;

    vector <int> v(n);
    for (int &i : v) {
        cin >> i;
    }

    vector <int> a = v;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (v[i] != a[1]) {
            cout << i + 1 << endl;
            break;
        }
    }
}

int main() {
    int t; 
    cin >> t;

    while (t--) {
        solve();
    }
}
*/