#include <iostream>
using namespace std;

int main() {
    long long n, count = 0;
    cin >> n;

    if (n / 100 != 0) {
        count += n / 100;
        n -= 100 * (n / 100);
    }
    if (n / 20 != 0) {
        count += n / 20;
        n -= 20 * (n / 20);
    }
    if (n / 10 != 0) {
        count += n / 10;
        n -= 10 * (n / 10);
    }
    if (n / 5 != 0) {
        count += n / 5;
        n -= 5 * (n / 5);
    }
    count += n;

    cout << count << endl;
    return 0;
}