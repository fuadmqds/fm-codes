#include <iostream>
using namespace std;

int main() {
    int matrix[6][6];
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> matrix[i][j];
        }
    }
    int move = 0;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (matrix[i][j] == 1) {
                if (i == 3 && j == 3) {
                    cout << 0 << endl;
                    return 0;
                }
                if (i > 3) {
                    move += (i-3);
                } else {
                    move += (3-i);
                }
                if (j > 3) {
                    move += (j-3);
                } else {
                    move += (3-j);
                }
            }
        }
    }
    cout << move << endl;
    return 0;
}

/* 
// Alternative Code
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[6][6];
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> matrix[i][j];
        }
    }

    int move = 0;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (matrix[i][j] == 1) {
                if (i == 3 && j == 3) {
                    cout << 0 << endl;
                    return 0;
                } else {
                    move = abs(i-3) + abs(j-3);
                    break;
                }
            }
        }
    }
    cout << move << endl;
    return 0;
}
*/