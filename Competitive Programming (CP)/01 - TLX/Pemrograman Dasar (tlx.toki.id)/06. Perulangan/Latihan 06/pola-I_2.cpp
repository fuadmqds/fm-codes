#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        if (i % K != 0) {
            cout << i << " ";
        } else {
            cout << "* ";
        }
    }
}