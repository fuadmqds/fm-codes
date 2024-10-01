#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double totalFraction = 0.0;

    for (int i = 0; i < n; i++) {
        double p; cin >> p;
        totalFraction += p;
    }
    
    double ans = totalFraction / n;
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}