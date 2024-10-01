#include <iostream>
using namespace std;

int main() {
    double s, L, K;
    cout << "Input sisi persegi : ";
    cin >> s;
    cout << endl;
    
    K = 4*s;
    L = s*s;

    cout << "Keliling persegi = " << K << endl;
    cout << "Luas persegi = " << L << endl;

    return 0;
}