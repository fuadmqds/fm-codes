#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n; cin >> n;
    if (n == 0) {cout << 1; return 0;}
    
    int r = n % 4;
    if (r == 1) cout << 8;
    else if (r == 2) cout << 4;
    else if (r == 3) cout << 2;
    else if (r == 0) cout << 6;
    return 0;
}
// FM