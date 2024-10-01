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
    
    int n, cnt = 0; 
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
// FM

/*

1 10
2 5
5 2

1 50
2 25
5 10
10 5
25 2

*/