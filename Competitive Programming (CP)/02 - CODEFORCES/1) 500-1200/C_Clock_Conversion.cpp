#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string sub1 = s.substr(0, 2);
        string sub2 = s.substr(3, 2);

        if (sub1 == "00") {
            cout << "12:" << sub2 << " AM";
        } else if (sub1 < "12") {
            cout << s << " AM";
        } else if (sub1 == "12") {
            cout << "12:" << sub2 << " PM";
        } else {
            int hh = stoi(sub1) - 12;
            if (hh < 10) cout << 0;
            cout << hh << ":" << sub2 << " PM";
        }
        cout << endl;
    }
    return 0;
}
// FM