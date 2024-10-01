#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float N;
    cin >> N;

    if (N != trunc(N)) {
        if (N > 0) {
            cout << trunc(N) << " " << trunc(N+1) << endl;
        } else if (N < -1) {
            cout << trunc(N-1) << " " << trunc(N) << endl;
        } else {
            cout << trunc(N-1) << " 0"<< endl;
        }
    } else {
        cout << N << " " << N << endl;
    }
}