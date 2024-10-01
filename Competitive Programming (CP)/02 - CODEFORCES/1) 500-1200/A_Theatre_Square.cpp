#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    
    if ((a >= n && a >= m)) {
        cout << 1 << endl;
    } else if (a == 1) {
        cout << n * m << endl;
    } else {
        cout << ((n+a-1)/a) * ((m+a-1)/a) << endl;
    }
    return 0;
}