#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

bool check(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    Bismillah;
    
    int n, m;
    cin >> n >> m;

    int cur = n + 1;
    while (cur <= m) {
        bool prime = true;
    
        if (check(cur)) {
            if (cur == m) {
                cout << "YES" << endl;
                return 0;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
        cur++;
    }
    cout << "NO" << endl;
    return 0;
}
// FM