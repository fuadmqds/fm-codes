#include <iostream>
using namespace std;

int main() {
    int t, n;

    cin >> t;
    while (t--) {
        bool move[4] = {false}; // {right, left, up, down}
        bool broken = true;
        int x = 0, y = 0, a, b;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            if (a > x) move[0] = true;
            else if (a < x) move[1] = true;
            if (b > y) move[2] = true;
            else if (b < y) move[3] = true;
        }
        for (int i = 0; i < 4; i++) {
            if(!move[i]) {
                broken = false;
                break;
            }
        }
        if (broken) {
            cout << "NO";
        } else {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}