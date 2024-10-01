#include <iostream>
using namespace std;

int main() {
    int in[4], out[4], decimal = 0;

    for (int i = 0; i < 4; i++) {
        cin >> in[i];
    }

    int pow = 1;
    for (int i = 4-1; i >= 0; i--) {
        if (in[i] == 1) {
            decimal += pow;
        }
        pow *= 2;
    }

    cout << "decimal = " << decimal << endl;

    if (decimal == 0) cout << "1 1 1 1 1 1 0";
    else if (decimal == 1) cout << "0 1 1 0 0 0 0";
    else if (decimal == 2) cout << "1 1 0 1 1 0 1";
    else if (decimal == 3) cout << "1 1 1 1 0 0 1";
    else if (decimal == 4) cout << "0 1 1 0 0 1 1";
    else if (decimal == 5) cout << "1 0 1 1 0 1 1";
    else if (decimal == 6) cout << "1 0 1 1 1 1 1";
    else if (decimal == 7) cout << "1 1 1 0 0 0 0";
    else if (decimal == 8) cout << "1 1 1 1 1 1 1";
    else if (decimal == 9) cout << "1 1 1 1 0 1 1";
    else cout << "0 0 0 0 0 0 0";

    return 0;
}