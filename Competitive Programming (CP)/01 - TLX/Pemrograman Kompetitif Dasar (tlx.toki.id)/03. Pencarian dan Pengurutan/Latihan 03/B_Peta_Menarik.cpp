#include <bits/stdc++.h>
#define semoga_ac ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    semoga_ac;

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> v(n + 2, vector <int> (m + 2, 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int x; cin >> x;
            v[i][j] = x;
        }
    }

    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            if (v[i-1][j] * v[i+1][j] * v[i][j-1] * v[i][j+1] == k) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << "0 0" << endl;
    return 0;
}
// FM