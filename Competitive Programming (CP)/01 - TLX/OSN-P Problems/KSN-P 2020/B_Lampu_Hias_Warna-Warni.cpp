#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
 
    vector<int> cnt(26);
    for (auto c : s) {
        ++cnt[c - 'A'];
    }
    
    sort(cnt.rbegin(), cnt.rend());
    if (cnt[2] == 0) {
        cout << -1 << '\n';
        return 0;
    }

    cout << cnt[2] + min(cnt[1], cnt[2] + 1) + min(cnt[0], cnt[2] + 1) << '\n';
    return 0;
}