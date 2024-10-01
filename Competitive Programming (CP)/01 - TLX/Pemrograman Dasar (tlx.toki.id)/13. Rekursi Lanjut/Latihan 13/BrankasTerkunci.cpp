#include <iostream>
using namespace std;

int N, K;
int ans[101];

void write(int depth) {
    if (depth >= K) {
        for (int i = 0; i < K; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    } else {
        for (int i = ans[depth - 1] + 1; i <= N; i++) {
            ans[depth] = i;
            write(depth + 1);
        }
    }
}

int main() {
    cin >> N >> K;

    write(0);
    return 0;
}