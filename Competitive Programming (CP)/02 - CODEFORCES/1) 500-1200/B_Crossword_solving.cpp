#include <bits/stdc++.h>
#define vc vector 
#define ll long long
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;

    vc<int> ans(1007), symb;
    for (int i = 0; i <= m - n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[j] != t[j + i]) symb.push_back(j);
        }
        if (ans.size() > symb.size()) ans = symb;
        symb.clear();
    } 

    cout << ans.size() << endl;

    for (int i : ans) {
        cout << i + 1 << " ";
    }
    return 0;
}
// FM