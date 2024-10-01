#include <iostream>
using namespace std;

int main() {
    double r, t, pi = 3.14, L, V;

    cout << "Input jari-jari tabung : ";
    cin >> r;
    cout << "Input tinggi tabung : ";
    cin >> t;
    cout << endl;

    L = 2*pi*r*(r + t);
    V = pi*(r*r)*t;

    cout << "Luas permukaan tabung = " << L << endl;
    cout << "Volume tabung = " << V << endl;

    return 0;
}