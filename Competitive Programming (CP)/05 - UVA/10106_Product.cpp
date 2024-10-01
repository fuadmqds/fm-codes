#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace boost::multiprecision;
using namespace std;

int main() {
    Bismillah;

    cpp_int x, y;
    while (cin >> x >> y) {
        cpp_int ans = x * y;

        cout << ans << endl;
    }
    
    return 0;
}
// FM