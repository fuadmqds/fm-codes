#include <iostream>
#define ll long long
using namespace std;

ll fpb(ll a, ll b) {
    if (b == 0) return a;
    else return fpb(b, a % b);
}

int main() {
    ll A, B, C, D, E, F;
    cin >> A >> B >> C >> D;

    if (B == D) {
        E = A + C;
        F = B;
    } else {
        F = (B * D);
        E = A * D + C * B;
    }

    ll gcd = fpb(E, F);

    if (gcd == 1) {
        cout << E << " " << F << endl;
    } else {
        cout << E/gcd << " " << F/gcd << endl;
    }
    return 0;
}