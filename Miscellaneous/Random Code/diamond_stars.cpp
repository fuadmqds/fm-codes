#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;
    int sp = 1;
    int star = 1;
    bool mirror = false;

    for (int i = n; i;) {
        if (i == n + 1) {
            break;
        }

        for (int j = sp * i - 1; j; j--) {
            cout << ' ';
        }
        for (int k = star; k; k--) {
            cout << '*';
        }

        if (mirror) {
            i++;
            star -= 2;
        }
        else {
            i--;
            star += 2;
        }

        if (i == 1) {
            mirror = true;
            sp = 1;
        }
        cout << "\n";
    }
    return 0;
}

/*
int n;
cin >> n; // n must be odd number
int s = n / 2, d = 1; // space, diamond star

for (int i = 0; i < n / 2; ++i) {
    for (int j = 0; j < s; ++j) {
        cout << ' ';
    }
    for (int k = 0; k < d; ++k) {
        cout << '*';
    }
    d += 2;
    s -= 1;
    cout << "\n";
}

s = 0, d = n;
for (int i = 0; i < (n + 1) / 2; i++) {
    for (int j = 0; j < s; ++j) {
        cout << ' ';
    }
    for (int k = 0; k < d; ++k) {
        cout << '*';
    }
    d -= 2;
    s++;
    cout << "\n";
}
*/