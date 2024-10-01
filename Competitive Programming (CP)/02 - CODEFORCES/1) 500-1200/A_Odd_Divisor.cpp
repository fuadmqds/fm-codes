#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    long long t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        while (n % 2 == 0) {
            n /= 2;
        }
        
        if (n != 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}