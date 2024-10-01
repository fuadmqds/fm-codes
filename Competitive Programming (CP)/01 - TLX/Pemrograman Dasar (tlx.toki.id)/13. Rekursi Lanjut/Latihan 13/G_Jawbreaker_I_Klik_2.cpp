#include <iostream>
using namespace std;

int R, C, M, N; 
int matrix[101][101];
int row[] = {1, 0, -1, 0};
int column[] = {0, 1, 0, -1};

int floodFill(int r, int c, int click) {
    int ball = 1;
    matrix[r][c] = 0;
    for (int i = 0; i < 4; i++) {
        int newRow = r + row[i], newColumn = c + column[i];
        if (newRow >= 0 && newRow < M && newColumn >= 0 && newColumn < N) {
            if (matrix[newRow][newColumn] == click) {
                ball += floodFill(newRow, newColumn, click);
            }
        }
    }
    return ball;
}

int main() {
    cin >> M >> N;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    cin >> R >> C;

    int ans = floodFill(R, C, matrix[R][C]);
    cout << ans * (ans - 1) << endl;
}