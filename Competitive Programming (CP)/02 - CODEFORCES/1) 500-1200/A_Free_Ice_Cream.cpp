#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    long long n, x, d, cnt = 0;
    cin >> n >> x;

    char c;
    for (int i = 0; i < n; i++) {
        cin >> c >> d;

        if (c == '+') {
            x += d;
        } else {
            if (d > x) {
                cnt++;
            } else {
                x -= d;
            }
        }
    }

    cout << x << " " << cnt << endl;
    return 0;
}