#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int a[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);
    int maxDistance = a[1] * 2;
    for (int i = 1; i <= n; i++) {
        if (i != n && maxDistance < a[i+1] - a[i]) {
            maxDistance = a[i+1] - a[i];
        } else if (i == n && maxDistance < (l - a[i]) * 2) {
            maxDistance = (l - a[i]) * 2;
        }
    }
    
    double ans = maxDistance * 0.5;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}