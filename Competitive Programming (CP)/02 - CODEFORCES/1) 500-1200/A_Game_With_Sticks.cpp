#include <iostream>
using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n >> m;

    if (n <= m) {
        count = n;
    } else {
        count = m;
    }

    if (count % 2 == 1) {
        cout << "Akshat" << endl;
    } else {
        cout << "Malvika" << endl;
    }
    return 0;
}