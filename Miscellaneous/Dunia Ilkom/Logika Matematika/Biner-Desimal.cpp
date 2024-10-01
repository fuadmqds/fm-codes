#include <iostream>
using namespace std;

int main() {
    int N, decimal = 0, pow = 1;

    cout << "Input angka biner : ";
    cin >> N;
    cout << endl;

    cout << "Angka desimal dari biner " << N << " adalah : ";

    while (N > 0) {
        if (N % 10 == 1) {
            decimal += pow;
        }
        pow *= 2;
        N /= 10;
    }
    cout << decimal << endl;
    return 0;
}