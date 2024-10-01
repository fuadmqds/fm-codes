#include <iostream>
using namespace std;

int N;
int ans[101];
int check[101];

void write(int depth) {
    if (depth >= N) {
      bool zigzag = true;
      for (int i = 1; i < N - 1; i++) {
        bool isGreaterThan = ans[i] > ans[i-1] && ans[i] > ans[i+1];
        bool isSmallerThan = ans[i] < ans[i-1] && ans[i] < ans[i+1];
        if (!(isGreaterThan || isSmallerThan)) {
          zigzag = false;
        }
      }
      if (zigzag) {
        for (int i = 0; i < N; i++) {
          cout << ans[i];
        }
        cout << endl;
      }
    } else {
        for (int i = 1; i <= N; i++) {
            if(!check[i]) {
                check[i] = true;
                ans[depth] = i;
                write(depth + 1);
                check[i] = false;
            }
        }
    }
}

int main() {
    cin >> N;

    write(0);
    return 0;
}