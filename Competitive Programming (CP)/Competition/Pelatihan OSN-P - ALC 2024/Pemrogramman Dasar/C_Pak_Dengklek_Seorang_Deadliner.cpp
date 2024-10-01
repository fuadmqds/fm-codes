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
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;
    
    int n, h, m, s;
    cin >> n;

    h = n / 3600;
    n -= h * 3600;
    m = n / 60;
    n -= m * 60;
    s = n;

    cout << h << endl << m << endl << s << endl;
    return 0;
}
// FM