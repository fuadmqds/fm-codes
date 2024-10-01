#include <iostream>
using namespace std;

int main() {
    int x, ans = 0;
    cin >> x;

    while (x) {
        if (x % 2 == 1) {
            ans++;
        }
        x /= 2;
    }

    cout << ans << endl;
    return 0;
}