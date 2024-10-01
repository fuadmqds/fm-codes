#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input lebar belah ketupat : ";
    cin >> n;
    cout << endl;

    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= n; j++) {
            if (j < i) {
                cout << " ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for (int i = n-1; i > 0; i--) {
        for (int j = n; j > 0; j--) {
            if (j > i) {
                cout << " ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}