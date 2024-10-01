#include <iostream>
using namespace std;

int main() {
    double r, pi = 3.14, L, V;

    cout << "Input jari-jari bola : ";
    cin >> r;

    cout << "Luas Permukaan bola = " << (4.00 / 3.00) * pi * (r*r*r) << endl;
    cout << "Volume bola = " << 4 * pi * (r*r) << endl;

    return 0;
}