#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, t, L, K, sisiMiring;
    cout << "Input alas segitiga : ";
    cin >> a;
    cout << "Input tinggi segitiga : ";
    cin >> t;
    cout << endl;

    sisiMiring = sqrt(a*a + t*t);
    
    K = a + t + sisiMiring;
    L = 0.5*a*t;

    cout << "Keliling segitiga = " << K << endl;
    cout << "Luas segitiga = " << L << endl;

    return 0;
}