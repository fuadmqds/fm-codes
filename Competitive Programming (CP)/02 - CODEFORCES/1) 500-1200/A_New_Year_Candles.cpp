#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int a, b, h = 0; 
    cin >> a >> b;

    int cura = a, burn = 0;
    while (cura) {
        h += cura;
        burn += cura;

        cura = burn / b;
        burn %= b;
    }

    cout << h << endl;
    return 0;
}
// FM