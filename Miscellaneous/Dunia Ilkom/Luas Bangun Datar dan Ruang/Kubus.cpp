#include <iostream>
using namespace std;

int main() {
    double s, L, V;

    cout << "Input panjang sisi kubus : ";
    cin >> s;
    cout << endl;

    L = 6*(s*s);
    V = s*s*s;

    cout << "Luas permukaan kubus = " << L << endl;
    cout << "Volume kubus = " << V << endl;

    return 0;
}