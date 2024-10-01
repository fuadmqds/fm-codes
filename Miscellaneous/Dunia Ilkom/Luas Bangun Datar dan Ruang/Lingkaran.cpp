#include <iostream>
using namespace std;

int main() {
    double r, L, K, pi = 3.14;

    cout << "Input jari-jari lingkaran : ";
    cin >> r;
    cout << endl;

    K = 2*pi*r;
    L = pi*r*r;

    cout << "Keliing Lingkaran = " << K << endl;
    cout << "Luas lingkaran = " << L << endl;

    return 0;
}