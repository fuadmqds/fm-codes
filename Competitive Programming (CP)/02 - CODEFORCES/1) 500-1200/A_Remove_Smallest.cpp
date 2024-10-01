#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a, a + n);
        bool eliminated[1001] = {false};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                if (!eliminated[i] && !eliminated[j]) {
                    if (abs(a[i] - a[j]) <= 1) {
                        if (a[i] > a[j]) {
                            eliminated[j] = true;
                        } else {
                            eliminated[i] = true;
                        }
                    }
                }
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (!eliminated[i]) {
                count++;
            }
        }
        if (count == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}