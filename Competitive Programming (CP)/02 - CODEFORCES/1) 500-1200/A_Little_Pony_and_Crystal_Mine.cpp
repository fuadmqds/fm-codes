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

    int n;
    cin >> n;
    int s = n / 2, d = 1; // star, diamond

    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < s; ++j) {
            cout << '*';
        }
        for (int k = 0; k < d; ++k) {
            cout << 'D';
        }
        for (int j = 0; j < s; ++j) {
            cout << '*';
        }
        d += 2;
        s -= 1;
        cout << "\n";
    }

    s = 0, d = n;
    for (int i = 0; i < (n + 1) / 2; i++) {
        for (int j = 0; j < s; ++j) {
            cout << '*';
        }
        for (int k = 0; k < d; ++k) {
            cout << 'D';
        }
        for (int j = 0; j < s; ++j) {
            cout << '*';
        }
        d -= 2;
        s++;
        cout << "\n";
    }
    return 0;
}
// FM