#include <iostream>
using namespace std;

int main() {
    int N, binary[1001], count = 0;

    cout << "Input angka desimal : ";
    cin >> N;
    cout << endl;

    for (int i = 1; N > 0; i++) {
        binary[i] = N % 2;
        N /= 2;
        count++;
    }

    cout << "Angka binernya adalah : ";

    for (int i = count; i > 0; i--) {
        cout << binary[i];
    }
    cout << endl;
    return 0;
}