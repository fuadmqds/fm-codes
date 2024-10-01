#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, m, sA = 0, sB = 0;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int &i : a) {
        cin >> i;
        sA += i;
    }
    for (int &j : b) {
        cin >> j;
        sB += j;
    }
    sort(b.begin(), b.end());

    int ans = 0;
    while (!b.empty() && sA / (double) a.size() <= sB / (double) b.size()) {
        // buah yang akan dikeluarkan dari b
        int out = b.back();
        while (!b.empty() && b.back() == out) {
            // keluarkan berat buah yang sama dengan out
            sA += out;
            sB -= out;
            ans += out;
            b.pop_back();
            a.push_back(out);
        }
    }

    cout << (b.empty() ? -1 : ans) << '\n';
    return 0;
}   