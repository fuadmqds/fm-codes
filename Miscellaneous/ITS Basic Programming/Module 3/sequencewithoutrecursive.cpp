#include <iostream>
#include <cmath>
using namespace std;

double sequence(int x) {
    if (x == 1) 
        return 1;
    else 
        return (x*x*x)*0.333 + (x*x)*0.500 + x*0.167;
}

int main() {
    int n;
    cin >> n;

    double ans = ceil(sequence(n));
    cout << ans;
    return 0;
}