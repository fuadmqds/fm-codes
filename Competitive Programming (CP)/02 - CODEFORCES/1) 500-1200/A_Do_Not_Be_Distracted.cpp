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
    
    int t, n;
    string s;

    cin >> t;
    while (t--) {
        cin >> n >> s;

        bool ans = true;
        vc <bool> visit(26, false);
        visit[s[0] - 65] = true;
        char temp = s[0];

        for (int i = 0; i < n; i++) {
            if (s[i] != temp) {
                if (!visit[s[i] - 65]) {
                    visit[s[i] - 65] = true;
                } else {
                    ans = false;
                    break;
                }
                temp = s[i];
            }
        }
        
        if (ans) puts("YES");
        else puts("NO");
    }
    return 0;
}
// FM