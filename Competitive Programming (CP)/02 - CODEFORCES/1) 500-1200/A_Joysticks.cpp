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
#define endl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;
    
    int a, b, cnt = 0;
    cin >> a >> b;

    if (a == 1 && b == 1) {
        cout << cnt << endl;
        return 0;
    }

    while (a > 0 && b > 0) {
        cnt++;
        if (a < b) {
            a++;
            b -= 2;
        } else {
            b++;
            a -= 2;
        }
    }
    
    cout << cnt << endl;
    return 0;
}
// FM

/*
3 5

4 3
2 4
3 2
1 3
2 1

0 2
*/