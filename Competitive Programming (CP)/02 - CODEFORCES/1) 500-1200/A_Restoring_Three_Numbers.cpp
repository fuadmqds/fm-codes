#include <iostream>
using namespace std;

int main() {
    int p, q, r, s;
    cin >> p >> q >> r >> s;

    int max = -1;
    if (max < p) max = p;
    if (max < q) max = q;
    if (max < r) max = r;
    if (max < s) max = s;
    
    if (p != max) {
        cout << max - p << " ";
    }
    if (q != max) {
        cout << max - q << " ";
    }
    if (r != max) {
        cout << max - r << " ";
    }
    if (s != max) {
        cout << max - s << " ";
    }
    return 0;
}