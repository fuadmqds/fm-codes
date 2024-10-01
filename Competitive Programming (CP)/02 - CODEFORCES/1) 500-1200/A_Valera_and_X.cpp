#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n;
    char d, a, c;
    bool ans = true;

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> c;
            if (i == 0 && j == 0) d = c;
            if (i == 0 && j == 1) a = c;

            if (i == j || j == n-i-1) {
                if (c == d) continue;
                else {ans = false; continue;}
            }
            
            if (c == a) continue;
            else ans = false;
        }
    }
    
    puts((a != c) && ans ? "YES" : "NO");
    return 0;
}
// FM