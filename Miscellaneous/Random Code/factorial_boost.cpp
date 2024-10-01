#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

cpp_int factorial_boost(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial_boost(n-1);
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << factorial_boost(n) << endl;
    }
    
    return 0;
}