#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const int MAX = 1e9 + 7;

int main() {
    Bismillah;
    
    int n, max = -MAX, min = MAX, cntMax = 0, cntMin = 0;
    cin >> n;

    vector<int> v(n);
    for (int &i : v) {
        cin >> i;
        if (max < i) max = i;
        if (min > i) min = i;
    }

    for (int i : v) {
        if (i == max) cntMax++;
        if (i == min) cntMin++;
    }

    if (max == min) cout << 0 << endl;
    else cout << n - cntMax - cntMin << endl;
    return 0;
}
// FM