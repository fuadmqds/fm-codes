#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t, h, m, r = 0; 
    cin >> t;

    while (t--) {
        cin >> h >> m;

        r += 60 - m;
        r += (23 - h) * 60;

        cout << r << endl;
        r = 0;
    } 
    return 0;
}
// FM