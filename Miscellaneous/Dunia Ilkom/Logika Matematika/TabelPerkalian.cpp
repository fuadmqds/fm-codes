#include <iostream>
using namespace std;
 
int main() {
    cout << "##  Program C++ Tabel Perkalian ##" << endl;
    cout << "==================================" << endl;
    cout << endl;

    int n;
    cout << "Input angka : ";
    cin >> n; cout << endl;

    cout << "Tabel perkalian angka " << n << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n*i << endl;
    }
    cout << endl;
    return 0;
}