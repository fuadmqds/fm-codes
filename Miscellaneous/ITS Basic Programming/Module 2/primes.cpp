#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cur = 2;
    while (cur <= n) {
        bool prima = true;
        for (int i = 2; i*i <= cur; i++) {
            if (cur % i == 0) {
                prima = false;
                break;
            }
        }
        if (prima) {
            cout << " *";
        } else {
            cout << " " << cur;
        }
        cur++;
    }
    return 0;
}