#include <iostream>
using namespace std;

int main() {
    string p; cin >> p;

    int lp = p.length();
    for (int i = 0; i < lp; i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
