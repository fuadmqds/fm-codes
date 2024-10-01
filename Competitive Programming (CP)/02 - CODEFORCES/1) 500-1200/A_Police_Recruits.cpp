#include <iostream>
using namespace std;

int main() {
    int n, cur = 0, count = 0;
    cin >> n;

    while (n--) {
        int x; cin >> x;
        if (x > 0) {
            cur += x;
        } else {
            cur--;
        }
        if (cur < 0) {
            count++;
            cur = 0;
        }
    }
    cout << count << endl;
    return 0;
}