#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    vc<bool> ans(6, true);
    vc<string> output = {"identik", "vertikal", "horisontal", "diagonal kanan bawah", "diagonal kiri bawah", "tidak identik"};
    
    int n;
    
    cin >> n >> n;
    vc<vc<int>> v1(n, vc<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v1[i][j];
        }
    }

    cin >> n >> n;
    vc<vc<int>> v2(n, vc<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v1[i][j] != v2[i][j]) {
                ans[0] = false;
            }
            if (v1[i][j] != v2[i][n-j-1]) {
                ans[1] = false;
            }
            if(v1[i][j] != v2[n-i-1][j]) {
                ans[2] = false;
            }
            if (v1[i][j] != v2[j][i]) {
                ans[3] = false;
            }
            if (v1[i][j] != v2[n-j-1][n-i-1]) {
                ans[4] = false;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        if (ans[i]) {
            cout << output[i] << endl;
            return 0;
        }
    }
}
// FM



// Another Solution
/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n;

    cin >> n >> n;
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cin >> n >> n;
    int b[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    
    // cek identik
    bool check = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != b[i][j]) {
                check = false;
                break;
            }
        }
        if (!check) break;
    }

    if (check) {
        cout << "identik\n";
        return 0;
    }

    // cek vertikal
    check = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != b[i][n-j-1]) {
                check = false;
                break;
            }
        }
        if (!check) break;
    }

    if (check) {
        cout << "vertikal\n";
        return 0;
    }

    // cek horizontal
    check = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != b[n-i-1][j]) {
                check = false;
                break;
            }
        }
        if (!check) break;
    }

    if (check) {
        cout << "horisontal\n";
        return 0;
    }

    // cek diagonal kanan bawah
    check = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != b[j][i]) {
                check = false;
                break;
            }
        }
        if (!check) break;
    }

    if (check) {
        cout << "diagonal kanan bawah\n";
        return 0;
    }

    // cek diagonal kiri bawah
    check = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != b[n-j-1][n-i-1]) {
                check = false;
                break;
            }
        }
        if (!check) break;
    }

    if (check) {
        cout << "diagonal kiri bawah\n";
        return 0;
    }

    // jika tidak ada yang memenuhi, maka tidak identik
    cout << "tidak identik" << endl;
    return 0;
}
// FM
*/