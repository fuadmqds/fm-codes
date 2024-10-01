#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, D, x, x1, x2;

    cout << "Format persamaan : ax^2 + bx + c = 0" << endl;
    cout << "Input nilai a : ";
    cin >> a;
    cout << "Input nilai b : ";
    cin >> b;
    cout << "Input nilai c : ";
    cin >> c;
    cout << endl;

    D = (b*b) - 4*a*c;

    cout << "Diskriminan = " << D;
    
    x1 = (-b + sqrt(D)) / (2*a);
    x2 = (-b - sqrt(D)) / (2*a);

    if (D < 0) {
        cout << " (akar tidak real / imajiner)" << endl;
    } else if (D == 0) {
        cout << " (akar real dan sama)" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        cout << " (akar real dan berbeda)" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    return 0;
}   