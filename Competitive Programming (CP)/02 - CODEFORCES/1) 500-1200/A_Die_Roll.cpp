#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return lcm(b, a % b);
    }
}

int main() {
    int y, w;
    cin >> y >> w;

    int Max = max(y, w);
    int numerator = 6 - Max + 1;
    int denominator = 6;

    int lcms = lcm(numerator, denominator);
    
    cout << numerator / lcms << "/" << denominator / lcms << endl;
    return 0;
}