#include <iostream>
using namespace std;

int main() {
    double a, b, t, L;
    
    cout << "Input panjang sisi sejajar atas : ";
    cin >> a;
    cout << "Input panjang sisi sejajar bawah : ";
    cin >> b;
    cout << "Input tinggi trapesium : ";
    cin >> t;

    L = 0.5*(a+b)*t;
    cout << "Luas trapesium = " << L << endl;

    return 0;
}