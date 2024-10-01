#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    char c;
    string b[3], s;
    b[0] = "qwertyuiop";
    b[1] = "asdfghjkl;";
    b[2] = "zxcvbnm,./";

    cin >> c >> s;
    for (int i = 0; s[i]; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) {
                if (b[j][k] == s[i]) {
                    if (c == 'L') {
                        cout << b[j][k + 1];
                    } else {
                        cout << b[j][k - 1];
                    }
                }
            }
        }
    }
    return 0;
}
// FM