#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll k, n, w;
    cin >> k >> n >> w;

    ll cost = 0;
    for (int i = 1; i <= w; i++) {
        cost += i*k;
    }
    if (n >= cost) {
        cout << 0 << endl;
    } else {
        cout << cost - n << endl;
    }
    return 0;
} 