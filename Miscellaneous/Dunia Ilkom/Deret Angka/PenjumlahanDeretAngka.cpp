#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Jumlah deret angka yang diinginkan : ";
    cin >> n;
    cout << endl;

    int a1 = 1, b1 = 1, sum = 0;
    for (int i = 0; i < n; i++) {
        if (i < n-1) {
            cout << a1 << " + ";
        }
        if (i == n-1) {
            cout << a1 << " = ";
        }
        sum += a1;
        a1 += b1;
    }
    cout << sum << endl;

    return 0;
}