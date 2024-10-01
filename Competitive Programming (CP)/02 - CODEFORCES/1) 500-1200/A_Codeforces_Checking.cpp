#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t; char c;
    string s = "codeforces";

    cin >> t;
    while (t--) {
        bool ans = false;
        cin >> c;
        for (int i : s) {
            if (c == i) {
                ans = true;
                break;
            }
        }

        if (ans) puts("YES");
        else puts ("NO");
    }
    return 0;
}
// FM



// Another Solution
/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const string s = "codeforces";

void solve() {
    char c; cin >> c;
    
    for (int i : s) {
        if (c == i) {puts("YES"); return;}
    }
    puts("NO");
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
}
// FM
*/