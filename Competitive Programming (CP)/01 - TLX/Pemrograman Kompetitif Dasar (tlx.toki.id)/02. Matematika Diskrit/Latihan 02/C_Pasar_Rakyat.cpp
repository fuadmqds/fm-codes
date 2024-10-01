#include <iostream>
using namespace std;

int period[101];

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int lcm(int k) {
    int ret = period[0];
    for (int i = 1; i < k; i++) {
        ret = (ret * period[i]) / gcd(ret, period[i]);
    }
    return ret;
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> period[i];
    }
    cout << lcm(n) << endl;
    return 0;
}