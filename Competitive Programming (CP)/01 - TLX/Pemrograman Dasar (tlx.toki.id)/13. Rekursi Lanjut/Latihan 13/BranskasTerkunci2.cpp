#include <iostream>
using namespace std;

int N, K;
int ans[101];

void write(int depth, int start) {
    if (depth >= K) {
        for (int i = 0; i < K; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    } else {
        for (int i = start; i <= N; i++) {
            ans[depth] = i;
            write(depth + 1, i + 1);
        }
    }
}

int main() {
    cin >> N >> K;

    write(0, 1);
    return 0;
}