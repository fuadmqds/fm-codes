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

int ans(int x) {
    if (x == 2) return 2;
    else return ans(x-2) * 2 + 2;
}

int main() {
    Bismillah;
    
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << ans(n) << endl; 
    }
    return 0;
}
// FM

/*
2, 4, 8, 16, 32, 64, 128, 256, 512, 1024
f(n)
f(2) = 2
{2} {4}
f(4) = 6
{2, 16} {4, 8}
f(6) = 70 - 56 = 14
{64, 2, 4} {8, 16, 32}
f(8) = 270 - 240 = 30
{256, 2, 4, 8} {16, 32, 64, 128}
f(n) = f(n-1) * 2 + 2;
*/