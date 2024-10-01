#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int digits(int n) {
    int cnt = 0;
    while (n) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

void spacePrinter(int x) {
    while (x--) {
        cout << " ";
    }
}

int main() {
    Bismillah;

    int step, mod;

    while (cin >> step >> mod) {
        vector<bool> val(mod, false);
        vector<int> seed(mod, 0);
        val[0] = true;

        for (int i = 1; i < mod; i++) {
            seed[i] = (seed[i-1] + step) % mod;
            val[seed[i]] = true;
        }

        bool yes = true;
        for (int i = 0; i < mod; i++) {
            if (!val[i]) {
                yes = false;
                break;
            }
        }
        
        spacePrinter(10 - digits(step));
        cout << step;
        spacePrinter(10 - digits(mod));
        cout << mod;

        if (yes) {
            cout << "    Good Choice";
        } else {
            cout << "    Bad Choice";
        }
        cout << "\n\n";
    }
    return 0;
}
// FM