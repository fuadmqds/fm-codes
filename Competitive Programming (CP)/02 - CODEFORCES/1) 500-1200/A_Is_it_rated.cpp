#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, a, b, bf = 9999;
    string ans = "";

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        if (a != b) {
            ans = "rated";
            break;
        }

        if (a > bf) {
            ans = "unrated";
        }
        bf = a;
    }

    if (ans != "") {
        cout << ans << endl;
    } else {
        cout << "maybe" << endl;
    }
    return 0;
}