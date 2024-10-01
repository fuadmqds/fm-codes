// Program mencari bilangan fibonacci ke N
// Kompleksitas O(2^N)
#include <iostream>
using namespace std;

int fibonacci(int x) {
    if (x <= 1) {
        return x;
    } else {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}

int main() {
    int N;
    cin >> N;

    cout << fibonacci(N) << endl;
}