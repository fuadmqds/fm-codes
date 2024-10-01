#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < m; ++i) {
        cout << n % k << ' ';
        n /= k;
    }
    return 0;
}


// Ryu's Code
/*
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, m, k; cin >> n >> m >> k;
    int maks = 1;
    while (n > maks) {
        maks *= k;
    }

    vector<int> v;
    while (maks != 0) {
        int res = (n / maks);
        n = n - (res * maks);
        v.push_back(res);
        maks = maks / k;
    }
    reverse(v.begin(), v.end());
    for (int i = 0;i < m;i++) {
        cout << v[i] << " ";
    }
    return 0;
}
*/