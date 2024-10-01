#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Jumlah deret angka yang diinginkan : ";
    cin >> n;

    cout << "Deret A = ";
    int a1 = 1, b1 = 1;
    for (int i = 0; i < n; i++) {
        cout << a1 << " ";
        a1 += b1;
    }
    cout << endl;
    
    cout << "Deret B = ";
    int a2 = 3, b2 = 3;
    for (int i = 0; i < n; i++) {
        cout << a2 << " ";
        a2 += b2;
    }
    cout << endl;

    cout << "Deret C = ";
    int a3 = 8, b3 = 1;
    for (int i = 0; i < n; i++) {
        cout << a3 << " ";
        a3 += b3;
    }
    cout << endl;

    cout << "Deret D = ";
    int a4 = 1, b4 = 3;
    for (int i = 0; i < n; i++) {
        cout << a4 << " ";
        a4 += b4;
        b4 +- 2;
    }

    return 0;
}