// Program untuk mengecek bilangan prima
// Time Complexity O(N)
#include <iostream>
using namespace std;

bool isPrime(int N) {
    if (N <= 1) {
        return false;
    }
    for (int i = 2; i <= N-1; i++) {
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    if (isPrime(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}