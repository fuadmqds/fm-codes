// Program untuk menampilkan bilangan prima <= N
// Time Complexity O(N^2)
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int N) {
    if (N <= 1) {
        return false;
    }
    for (int i = 2; i*i <= N; i++) { // Pertidaksamaan ini ekuivalen dengan i ≤ √N 
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}

string primeGenerator (int N) {
    string primeList = {};
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            primeList += to_string(i) + " ";
        }
    }
    return primeList;
}

int main() {
    int N;
    cin >> N;

    cout << primeGenerator(N) << endl;
    return 0;
}