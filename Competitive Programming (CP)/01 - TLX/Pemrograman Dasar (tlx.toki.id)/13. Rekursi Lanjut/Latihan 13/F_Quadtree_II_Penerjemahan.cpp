#include <iostream>
#include <string>
using namespace std;

int nCode;
string code[100000];
int matrix[128][128];

void quadTree(int r, int c, int size, string code) {
    if (code.length() == 0) {
        for (int i = r; i < r + size; i++) {
            for (int j = c; j < c + size; j++) {
                matrix[i][j] = 1;
            }
        }
        return;
    }
    if (code[0] == '0') {
        quadTree(r, c, size / 2, code.erase(0, 1));
    } else if (code[0] == '1') {
        quadTree(r, c + (size / 2), size / 2, code.erase(0, 1));
    } else if (code[0] == '2') {
        quadTree(r + (size / 2), c, size / 2, code.erase(0, 1));
    } else if (code[0] == '3') {
        quadTree(r + (size / 2), c + (size / 2), size / 2, code.erase(0, 1));
    }
}

int main() {    
    int R, C;
    cin >> nCode;

    for (int i = 0; i < nCode; i++) {
        cin >> code[i];
    }
    
    cin >> R >> C;

    int newSize = 1;
    while (newSize < max(R, C)) {
        newSize *= 2;
    }

    for (int i = 0; i < nCode; i++) {
        quadTree(0, 0, newSize, code[i].erase(0, 1));
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
        cout << matrix[i][j] << " ";
      }
      cout << endl;
   }
   
   return 0;
}