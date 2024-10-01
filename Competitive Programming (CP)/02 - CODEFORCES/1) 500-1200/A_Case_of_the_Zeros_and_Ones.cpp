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
    
    int n, c1 = 0, c0 = 0;
    string s;
    cin >> n >> s;

    for (char c : s) {
        if (c == '0') c0++;
        else c1++;
    }

    cout << abs(c1 - c0) << endl;
    return 0;
}
// FM