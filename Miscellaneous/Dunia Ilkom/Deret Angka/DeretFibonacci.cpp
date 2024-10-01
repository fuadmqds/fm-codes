#include <iostream>
using namespace std;

int main() {
    int n, f[100001], ans;
    cout << "Jumlah deret fibonacci yang diinginkan : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            f[i] = 0;
            cout << f[i] << " ";
        } else if (i == 1) {
            f[i] = 1;
            cout << f[i] << " ";
        } else {
            f[i] = f[i-1] + f[i-2];
            cout << f[i] << " ";
        }
    }
    return 0;
}