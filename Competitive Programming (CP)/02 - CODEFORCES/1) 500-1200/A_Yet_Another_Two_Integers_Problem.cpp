#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int move = 0;
        if (a == b) {
            cout << move << endl;
            continue;
        }

        if (a > b) {
            if ((a - b) % 10 != 0) {
                move += (a - b) / 10 + 1;
            } else {
                move += (a - b) / 10;
            }
        } else {
            if ((b - a) % 10 != 0) {
                move += (b - a) / 10 + 1;
            } else {
                move += (b - a) / 10;
            }
        }
        
        cout << move << endl;
    }
    return 0;
}