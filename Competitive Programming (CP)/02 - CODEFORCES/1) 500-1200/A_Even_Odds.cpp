#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) {
        cout << 1 + (k-1) * 2 << endl;
    } else {
        k -= (n + 1) / 2;
        cout << 2 + (k-1) * 2 << endl;
    }
    return 0;
}