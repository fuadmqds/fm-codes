#include <iostream>
using namespace std;

int main() {
    int n, ans = 1;
    cout << "Input angka : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        ans *= i;
    }

    cout << n << "! = " << ans << endl;

    return 0;
}