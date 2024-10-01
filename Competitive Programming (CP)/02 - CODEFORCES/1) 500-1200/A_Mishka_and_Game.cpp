#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, m, c, cntM = 0, cntC = 0;
    cin >> n;

    while (n--) {
        cin >> m >> c;

        if (m > c) cntM++;
        else if (m < c) cntC++;
    }

    if (cntM > cntC) {
        cout << "Mishka" << endl;
    } else if (cntM < cntC) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
// FM