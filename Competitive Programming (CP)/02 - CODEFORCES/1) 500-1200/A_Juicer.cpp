#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    int n, b, d, cur = 0, cnt = 0;
    cin >> n >> b >> d;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        if (a <= b) {
            cur += a;
            if (cur > d) {
                cnt++;
                cur = 0;
            }
        }
    }
    
    cout << cnt << endl;
    return 0;
}