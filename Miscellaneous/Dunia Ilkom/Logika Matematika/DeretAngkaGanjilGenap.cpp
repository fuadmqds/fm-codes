#include <iostream>
using namespace std;

int main() {
    cout << "##  Program C++ Deret Angka Ganjil / Genap  ##" << endl;
    cout << "=====================================" << endl;
    cout << endl;

    int n, m;
    bool c;

    cout << "Input angka awal : ";
    cin >> n;
    cout << "Input angka akhir : ";
    cin >> m;
    cout << "Deret angka ganjil / genap? (ketik 1 untuk ganjil dan 0 untuk genap) : ";
    cin >> c;
    cout << endl;

    if (c) {
        for (int i = n; i <= m; i++) {
            if (i % 2 == 1) {
                cout << i << " ";
            }
        }
        cout << endl;
    } else {
        for (int i = n; i <= m; i++) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}