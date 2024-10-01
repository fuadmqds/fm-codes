#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;

    if (a == b) ans++;
    else if (a == c) ans++;
    else if (a == d) ans++;
    if (b == c) ans++;
    else if (b == d) ans++;
    if (c == d) ans++;

    cout << ans << endl;
    return 0;
}