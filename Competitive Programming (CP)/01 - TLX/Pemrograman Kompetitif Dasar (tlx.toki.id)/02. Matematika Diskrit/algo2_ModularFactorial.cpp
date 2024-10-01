// Program menghitung N! mod k
// Time Complexity: O(N)
#include <iostream>
using namespace std;

int modularFactorial(int N, int k) {
    int res = 1;
    for (int i = 1; i < N; i++) {
        res = (res * i) % k;
    }
    return res;
}

int main() {
    int N, k;
    cin >> N >> k;
    
    cout << modularFactorial(N, k);
    return 0;
}