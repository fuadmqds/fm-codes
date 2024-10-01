#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int oneOpen = 0, twoOpen = 0, t1 = 0, t2 = d;

    int i = 0;
    while (i < n) {
        if (t1 >= t2) {
            t2 += t;
            i += k;
        }
        if (i >= n) break;
        t1 += t;
        i += k;
    }

    twoOpen = max(t1, t2);
    oneOpen = (n + k - 1) / k * t;

    if (twoOpen < oneOpen) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

// Simple Solution
/*
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, t, k, d;
    scanf("%d %d %d %d", &n, &t, &k, &d);
    puts((n - 1) / k * t > d ? "YES" : "NO");
    return 0;
}
*/