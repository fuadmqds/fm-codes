// Program untuk mencari fpb(a, b) menggunakan Euclidean Algorithm
// Time Complexity: O(log min(a, b))
// Auxiliary Space: O(log min(a,b))
#include <iostream>
using namespace std;

int euclid(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return euclid(b, a % b);
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << euclid(a, b) << endl;
    return 0;
}