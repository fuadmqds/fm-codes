// Binary Exponentation / Binary Power Algorithm
// Time Complexity: O(log B)
#include <bits/stdc++.h>
using namespace std;

// Recursive version
long long binary_power_recursion(long long A, long long B) {
    if (B == 0) {
        return 1;
    }

    long long result = binary_power_recursion(A, B / 2);

    result = result * result;

    if (B & 1) { // If B is odd
        return result * A;
    } else {
        return result;
    }
}

// Iterative version
long long binary_power_iterative(long long A, long long B) {
    long long result = 1;
    while (B) { 
        if (B & 1) { // If B is odd
            result = result * A;
        }
        result = result * result;
        B >>= 1;
    }
    return result;
}

int main() {
    long long A, B;
    cin >> A >> B;
    
    cout << binary_power_recursion(A, B) << "\n";
    cout << binary_power_iterative(A, B) << "\n";
    return 0;
}