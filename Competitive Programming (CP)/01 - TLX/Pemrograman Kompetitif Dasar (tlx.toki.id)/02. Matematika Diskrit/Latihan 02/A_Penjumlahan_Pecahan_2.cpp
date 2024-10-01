#include <iostream>
#define ll long long
using namespace std;

ll fpb(ll p, ll q) {
    if (q == 0) return p;
    else return fpb(q, p % q);
}

int main() {
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d;

    e = a*d + c*b;
    f = b*d;

    ll gcd = fpb(e, f);
    cout << e/gcd << " " << f/gcd;
    return 0;
}

/*
#include <cstdio>
#define ll long long
using namespace std;

ll fpb(ll p, ll q) {
    if (q == 0) return p;
    else return fpb(q, p % q);
}

int main() {
    ll a, b, c, d, e, f;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    e = a*d + c*b;
    f = b*d;

    ll gcd = fpb(e, f);
    printf("%lld %lld", e/gcd, f/gcd);
    return 0;
}
*/