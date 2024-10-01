#include <iostream>
using namespace std;

int main() {
    int n, a, b, max = -1000000;
    cin >> n;

    int nPassenger = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        nPassenger += b - a;
        if (max < nPassenger) {
            max = nPassenger;
        }
    }
    cout << max << endl;
    return 0;
}