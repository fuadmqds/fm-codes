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

        int cnt = 0;
        for (string f : {"mapie", "map", "pie"}) {
            for (int pos = 0; (pos = s.find(f, pos)) != string::npos;) {
                s[pos + f.size() / 2] = '?';
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
// FM


/*
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

    int t; cin >> t;
    while (t--) {
        string s;
        int n, cntmap = 0, cntpie = 0, cntmapie = 0;
        cin >> n >> s;

        for (int i = 0; i < n - 2; i++) {
            string sub = s.substr(i, 3);
            if (sub == "map") {
                cntmap++;
            } else if (sub == "pie") {
                cntpie++;
            }

            if (i < n - 4 && s.substr(i, 5) == "mapie") {
                cntmapie++;
            }
        }

        cout << cntmap + cntpie - cntmapie << endl;
    }
    return 0;
}
// FM
*/