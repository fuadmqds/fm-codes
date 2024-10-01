#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            for (int k = 1; k < 10; k++) {
                for (int l = 1; l < 10; l++) {
                    if (i == j || i == k || i == l || j == k || j == l || k == l) {
                        continue;
                    }
                    if (i + j == r1 && k + l == r2 && i + k == c1 && j + l == c2 && i + l == d1 && j + k == d2) {
                        cout << i << ' ' << j << endl;
                        cout << k << ' ' << l << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
// FM

/*
i j
k l
*/