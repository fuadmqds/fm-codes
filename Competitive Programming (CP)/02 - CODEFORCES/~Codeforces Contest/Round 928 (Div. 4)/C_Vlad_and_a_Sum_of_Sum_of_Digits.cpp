#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 200007;

int res[MAX];

int sumDigits(int x) {
    int res = 0;
    while (x) {
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main() {
    res[0] = 0;
    for (int i = 1; i < MAX; ++i) {
        res[i] = res[i-1] + sumDigits(i);
    }

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << res[n] << endl;
    }
    return 0;
}