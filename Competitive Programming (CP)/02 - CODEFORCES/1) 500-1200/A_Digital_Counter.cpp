#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;

    // Possible number of x
    /*
    0123456789

    0 = 2 {0, 8}
    1 = 7 (0, 1, 2, 3, 4, 7, 8, 9}
    2 = 2 {2, 8}
    3 = 3 {3, 8, 9}
    4 = 3 {4, 8, 9}
    5 = 4 {5, 6, 8, 9}
    6 = 2 {6. 8}
    7 = 5 {0, 3, 7, 8, 9}
    8 = 1 {8}
    9 = 2 {8, 9}
    */

    // x[100];
    // x['0'] = 2, x['1'] = 7, x['2'] = 2, x['3'] = 3, x['4'] = 3;
    // x['5'] = 4, x['6'] = 2, x['7'] = 5, x['8'] = 1, x['9'] = 2;

    // char a, b;
    // cin >> a >> b;
    // cout << x[a] * x[b] << '\n';

    int x[10] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
    char a, b;
    cin >> a >> b;
    cout << x[a - 48] * x[b - 48];
    return 0;
}
// FM