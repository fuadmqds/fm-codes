#include <iostream>
#include <string>
using namespace std;

int matrix[128][128];
int nAns = 0;
string ans[100000];

bool homogen(int r, int c, int size) {
    int value = matrix[r][c];
    for (int i = r; i < r+size; i++) {
        for (int j = c; j < c+size; j++) {
            if (matrix[i][j] != value)
            return false;
        }
    }   
    return true;
}

void quadTree(int r, int c, int size, string s) {
    if (homogen(r, c, size)) {
        if (matrix[r][c] == 1) {
            ans[nAns] = "1" + s;
            nAns++;
        }
    } else {
        size /= 2;
        quadTree(r, c, size, s + "0");
        quadTree(r, c + size, size, s + "1");
        quadTree(r + size, c, size, s + "2");
        quadTree(r + size, c + size, size,  s + "3");   
    }
}

int main() {
    int R, C;
    cin >> R >> C;

    int newSize = 1;
    while (newSize < max(R, C)) {
        newSize *= 2;
    }
    
    for (int i = 0; i < newSize; i++) {
        for (int j = 0; j < newSize; j++) {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> matrix[i][j];
        }
    }

    quadTree(0, 0, newSize, "");

    cout << nAns << endl;
    for (int i = 0; i < nAns; i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}