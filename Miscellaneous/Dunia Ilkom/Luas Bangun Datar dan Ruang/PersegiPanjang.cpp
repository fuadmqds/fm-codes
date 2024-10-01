#include <iostream>
using namespace std;

int main() {
    double l, p, L, K;
    cout << "Input panjang persegi : ";
    cin >> p;
    cout << "Input lebar persegi : ";
    cin >> l;
    cout << endl;

    K = 2*(p + l);
    L = p*l;

    cout << "Keliling persegi panjang = " << K << endl;
    cout << "Luas persegi panjang = " << L << endl;

    return 0;
}