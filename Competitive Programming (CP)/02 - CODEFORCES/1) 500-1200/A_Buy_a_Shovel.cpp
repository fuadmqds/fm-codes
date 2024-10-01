#include <iostream>
using namespace std;

int main() {
    int k, r, count = 1;
    cin >> k >> r;

    for (int i = 1;; i++) {
        int temp = k * i;
        if (temp % 10 == 0) {
            break;
        } else if (temp % 10 == r) {
            break;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}