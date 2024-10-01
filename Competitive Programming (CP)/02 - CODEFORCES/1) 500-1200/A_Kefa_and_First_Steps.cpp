#include <iostream>
using namespace std;

int main() {
    int n, a, count = 0, max = 0, prev = 0;
    cin >> n;

    while (n--) {
        cin >> a;

        if (prev <= a) {
            count++;
        } else {
            count = 1;
        }
        if (max < count) {
            max = count;
        }
        prev = a;
    }
    cout << max << endl;
    return 0;
}