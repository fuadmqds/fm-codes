#include <iostream>
#include <cmath>
using namespace std;

int power(int a, int m) {
    int res = 1;
    while (m > 0) {
        res *= a; 
        m--;
    }
    return res;
}

int main() {
    int N, d;
    cin >> N >> d;

    int arr[N][2];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
    int max = 0, min = 1000000000;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int ans = power(abs(arr[j][0] - arr[i][0]), d) + power(abs(arr[j][1] - arr[i][1]), d);

            if (ans > max) max = ans;
            if (ans < min) min = ans;
        }
    }
    cout << min << " " << max << endl;
}