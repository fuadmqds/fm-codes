#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for (int &i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());
    
    cout << v[k-1] << endl;
    return 0;
}
// FM