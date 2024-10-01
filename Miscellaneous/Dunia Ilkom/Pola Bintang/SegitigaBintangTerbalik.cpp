#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input tinggi segitiga : ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}