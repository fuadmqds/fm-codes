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
    
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        bool dot = false;

        if (n == 1) {
            cout << "##\n##" << endl;
            continue;
        }

        for (int i = 1; i <= n * 2; i++) {
            for (int j = 1; j <= n; j++) {
                if (dot) {
                    cout << "..";
                    dot = false;
                } else {
                    cout << "##";
                    dot = true;
                }
            }
            if (n % 2 == 1 && i % 2 == 1) {
                if (dot ? dot = false : dot = true);
            } else if (n % 2 == 0 && i % 2 == 0) {
                if (dot ? dot = false : dot = true);
            }
            cout << endl;
        }
    }
    return 0;
}
// FM