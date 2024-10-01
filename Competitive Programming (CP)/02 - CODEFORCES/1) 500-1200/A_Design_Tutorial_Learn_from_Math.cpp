#include <iostream>
using namespace std;

bool check(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n; 
    cin >> n;

    int x = 4;
    int y = n - 4;

    while (x) {
        if (!check(x) && !check(y)) {
            cout << x << " " << y << endl;
            break;
        } else {
            x++;
            y--;
        }
    }
}