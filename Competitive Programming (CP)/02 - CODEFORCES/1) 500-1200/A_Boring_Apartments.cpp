#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first,
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int totalDigits(int x) {
    int cnt = 0;
    while (x) {
        int temp = x;
        while (temp) {
            cnt++;
            temp /= 10;
        }
        x /= 10;
    }
    return cnt;
}

int main() {
    Bismillah;
    
    int t, x;
    cin >> t;
    while (t--) {
        cin >> x;
        cout << 10 * ((x % 10) - 1) + totalDigits(x) << endl;
    }
    return 0;
}
// FM