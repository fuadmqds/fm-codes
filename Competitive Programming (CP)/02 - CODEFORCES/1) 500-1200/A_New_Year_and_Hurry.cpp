#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int time = 240 - k, idx = 1, count = 0;
    while (time >= 5 * idx) {
        time -= 5 * idx;
        idx++;
        count++;
        if (count == n) {
            break;
        }
    }
    cout << count << endl;
    return 0;
}