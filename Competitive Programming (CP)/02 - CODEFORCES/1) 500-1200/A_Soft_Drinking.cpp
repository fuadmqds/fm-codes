#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = 0, lime = 0, salt = 0;

    if (nl <= k * l) {
        drink = (k * l) / nl;
    }

    lime = c * d;

    if (p >= np) {
        salt = p / np;
    }

    int min = 9999;
    if (min > drink) {
        min = drink;
    }
    if (min > lime) {
        min = lime;
    }
    if (min > salt) {
        min = salt;
    }

    cout << min / n << endl;
    return 0;
}