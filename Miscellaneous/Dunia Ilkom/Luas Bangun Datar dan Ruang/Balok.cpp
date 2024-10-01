#include <iostream>
using namespace std;

int main() {
    double p, l, t, L, V;

    cout << "Input panjang balok : ";
    cin >> p;
    cout << "Input lebar balok : ";
    cin >> l;
    cout << "Input tinggi balok : ";
    cin >> t;
    cout << endl;

    L = 2*(p*l + p*t + l*t);
    V = p*l*t;

    cout << "Luas permukaan balok = " << L << endl;
    cout << "Volume balok = " << V << endl;
    
    return 0;
}