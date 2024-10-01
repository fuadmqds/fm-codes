#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1e6 + 1;

int main() {
    int n, q;
    vector <int> c(MAX);

    cin >> n;
    int i = n;
    while (i--) {
        int x; cin >> x;
        c[x]++;
    }

    for (int x = 1; x < 100000; x++) {
        c[x] += c[x-1]; 
    }

    cin >> q;
    while (q--) {
        int m; cin >> m;
        if (m >= 100000) {
            cout << n << endl;
        } else {
            cout << c[m] << endl;
        }
    }
    return 0;
}