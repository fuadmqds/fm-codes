#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll n; cin >> n;
    ll nLuckyNumbers = 0;

    while (n > 0) {
        if (n % 10 == 7 || n % 10 == 4) {
            nLuckyNumbers++;
        }
        n /= 10;
    }

    if (nLuckyNumbers == 7 || nLuckyNumbers == 4) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}