#include <iostream>
using namespace std;

// O(N)

int factorial(int x) {
    if (x == 1) {
        return x;
    } else {
        return x * factorial(x-1);
    }
}

int main() {
    int N, ans = 1;
    cout << "Input angka : ";
    cin >> N;

    cout << N << "! = " << factorial(N);
}