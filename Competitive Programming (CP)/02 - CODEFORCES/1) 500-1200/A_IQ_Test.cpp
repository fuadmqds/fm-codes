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
    
    vc<vc<char>> g(6, vc<char>(6, '0'));

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            cin >> g[i][j];
        }
    }

    /*
    ###. ij 11 12 13 14
    #.#.    21 22 23 24
    ###.    31 32 33 34
    ....    41 42 43 44
    */

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (g[i][j] == '.') {
                if (g[i+1][j] == '#' && g[i][j+1] == '#' && g[i+1][j+1] == '#' || g[i+1][j] == '.' && g[i][j+1] == '.' && g[i+1][j+1] == '.') {
                    cout << "YES\n";
                    return 0;
                }
                if (g[i+1][j] == '#' && g[i][j-1] == '#' && g[i+1][j-1] == '#' || g[i+1][j] == '.' && g[i][j-1] == '.' && g[i+1][j-1] == '.') {
                    cout << "YES\n";
                    return 0;
                }
                if (g[i-1][j] == '#' && g[i][j-1] == '#' && g[i-1][j-1] == '#' || g[i-1][j] == '.' && g[i][j-1] == '.' && g[i-1][j-1] == '.') {
                    cout << "YES\n";
                    return 0;
                }
                if (g[i-1][j] == '#' && g[i][j+1] == '#' && g[i-1][j+1] == '#' || g[i-1][j] == '.' && g[i][j+1] == '.' && g[i-1][j+1] == '.') {
                    cout << "YES\n";
                    return 0;
                }
            } else {
                if (g[i+1][j] == '.' && g[i][j+1] == '.' && g[i+1][j+1] == '.' || g[i+1][j] == '#' && g[i][j+1] == '#' && g[i+1][j+1] == '#') {
                    cout << "YES\n";
                    return 0;
                }
                if (g[i+1][j] == '.' && g[i][j-1] == '.' && g[i+1][j-1] == '.' || g[i+1][j] == '#' && g[i][j-1] == '#' && g[i+1][j-1] == '#') {
                    cout << "YES\n";
                    return 0;
                }
                if (g[i-1][j] == '.' && g[i][j-1] == '.' && g[i-1][j-1] == '.' || g[i-1][j] == '#' && g[i][j-1] == '#' && g[i-1][j-1] == '#') {
                    cout << "YES\n";
                    return 0;
                }
                if (g[i-1][j] == '.' && g[i][j+1] == '.' && g[i-1][j+1] == '.' || g[i-1][j] == '#' && g[i][j+1] == '#' && g[i-1][j+1] == '#') {
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}
// FM