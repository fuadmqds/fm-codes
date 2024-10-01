#include <iostream>
using namespace std;

int main() {
    double C;

    cout << "Input suhu celcius : ";
    cin >> C;

    cout << C << "derajat Celcius = " << (9.00 / 5.00) * C + 32 << " derajat Farenheit" << endl;
    cout << C << "derajat Celcius = " << C + 273.15 << " derajat Kelvin" << endl;
    cout << C << "derajat Celcius = " << (4.00 / 5.00) * C << " derajat Reamur" << endl;

    return 0;
}