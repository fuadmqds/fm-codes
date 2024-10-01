#include <iostream>
using namespace std;

int doubleFactorial(int x) {
    if (x == 1) {
        return 1;
    } else if (x % 2 == 1) {
        return x * doubleFactorial(x - 1);
    } else {
        return x / 2 * doubleFactorial(x - 1);
    }
}

int main() {
    int N;
    cin >> N;
    cout << doubleFactorial(N);
}