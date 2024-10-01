#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const long long MAX = 1e18 + 7;

int main() {
    Bismillah;
    
    long long n, Max, Min;
    cin >> n;

    long long x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            Max = abs(x[i] - x[n-1]);
            Min = abs(x[i] - x[i+1]);
        } else if (i == n-1) {
            Max = abs(x[i] - x[0]);
            Min = abs(x[i] - x[i-1]);
        } else {
            Max = max(abs(x[i] - x[0]), abs(x[i] - x[n-1]));
            Min = min(abs(x[i] - x[i-1]), abs(x[i] - x[i+1]));
        }
        cout << Min << " " << Max << endl;
    }
    return 0;
}