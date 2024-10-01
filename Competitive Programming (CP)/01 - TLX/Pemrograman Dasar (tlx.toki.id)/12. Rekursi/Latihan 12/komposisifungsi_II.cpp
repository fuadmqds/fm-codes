#include <iostream>
#include <cmath>
using namespace std;

int comp(int a, int b, int n, int y) {
    if (n == 1) {
        return abs(a * y + b);
    } else {
        while (n > 1) {
            return abs(a * comp(a, b, n - 1, y) + b);
        }  
    }
}

int main() {
    int A, B, K, x;
    cin >> A >> B >> K >> x;

    cout << comp(A, B, K, x) << endl;
}