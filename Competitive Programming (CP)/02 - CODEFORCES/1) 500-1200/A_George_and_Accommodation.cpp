#include <iostream>
using namespace std;

int main() {
    int n, p, q, ans = 0;
    cin >> n;

    while (n--) {
        cin >> p >> q;
        if (p+2 <= q) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}