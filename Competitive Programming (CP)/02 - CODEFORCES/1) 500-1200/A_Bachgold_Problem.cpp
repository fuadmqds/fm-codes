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

int main() {
    Bismillah;
    
    int n;
    cin >> n;

    if (n & 1) {
        cout << (n - 3) / 2 + 1 << endl;
        int i = 1;
        while (i <= (n - 3) / 2) {
            cout << 2 << ' ';
            i++;
        }
        cout << 3;
    } else {
        cout << n / 2 << endl;
        int j = 1;
        while (j <= n / 2) {
            cout << 2 << ' ';
            j++;
        }
    }
    return 0;
}
// FM