#include <iostream>
using namespace std;

int main() {
    double d1, d2, L;

    cout << "Input diagonal 1 : ";
    cin >> d1;
    cout << "Input diagonal 2 : ";
    cin >> d2;

    L = 0.5*d1*d2;

    cout << "Luas belah ketupat = " << L << endl;

    return 0;
}