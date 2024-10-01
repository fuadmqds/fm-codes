#include <iostream>
#include <cmath>
using namespace std;

double luasPermukaan(double r, double t, double s, double pi) {
    return pi*r*s + pi*r*r;
}

double volume(double r, double t, double pi) {
    return (1.00/3.00)*pi*(r*r)*t;
}

int main() {
    double r, t, pi = 22.00/7.00, s;

    cout << "Input jari-jari kerucut : ";
    cin >> r;
    cout << "Input tinggi tinggi : ";
    cin >> t;
    cout << endl;

    s = sqrt(r*r + t*t);

    cout << "Luas permukaan tabung = " << luasPermukaan(r, t, s, pi) << endl;
    cout << "Volume tabung = " << volume(r, t, pi) << endl;

    return 0;
}