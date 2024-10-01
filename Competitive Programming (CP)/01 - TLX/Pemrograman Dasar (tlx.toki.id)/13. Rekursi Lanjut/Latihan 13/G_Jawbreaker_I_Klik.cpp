#include <iostream>
using namespace std;

int M, N, R, C;
int matrix[101][101];
int ball;
bool visited[101][101];

void find(int r, int c, int click) {
    if (r >= 0 && r <= M-1 && c >= 0 && c <= N-1) {
        if (!visited[r][c]) {
            visited[r][c] = true;
            if (matrix[r][c] == click) {
                ball++;
                find(r+1, c, click);
                find(r, c+1, click);
                find(r-1, c, click);
                find(r, c-1, click);
            }
        }
    }
}

int main() {
    cin >> M >> N;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cin >> R >> C;

    find(R, C, matrix[R][C]);

    int ans = ball * (ball - 1);
    cout << ans << endl;

    return 0;
}