#include <iostream>
using namespace std;

int main() {
    int x; cin >> x;
    
    int res = x / 5;
    int r = x % 5;
    if (r == 0) {
        cout << res << endl;
    } else {
        cout << res + 1 << endl;
    }
    return 0;
}