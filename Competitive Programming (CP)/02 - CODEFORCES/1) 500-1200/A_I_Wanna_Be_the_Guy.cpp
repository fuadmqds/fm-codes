#include <iostream>
using namespace std;

int main() {
    int n, p, q;
    bool level[101] = {false};
    cin >> n;

    cin >> p;
    while (p--) {
        int a; cin >> a;
        level[a] = true;
    }

    cin >> q;
    while (q--) {
        int b; cin >> b;
        level[b] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (level[i] == false) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}