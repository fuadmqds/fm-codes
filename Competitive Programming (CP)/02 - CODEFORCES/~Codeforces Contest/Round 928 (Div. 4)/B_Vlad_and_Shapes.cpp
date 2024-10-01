#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        char grid[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        bool triangle = false;
        int count[10] = {0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    count[i]++;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (count[i] == 1) {
                triangle = true;
            }
        }

        if (triangle) {
            cout << "TRIANGLE" << endl;
        } else {
            cout << "SQUARE" << endl;
        }
    }
}