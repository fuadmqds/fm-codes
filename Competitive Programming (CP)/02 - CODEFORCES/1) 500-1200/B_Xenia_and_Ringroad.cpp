#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long time = 0;
    int cur = 1;
    while (m--) {
        int a;
        cin >> a;

        if (a >= cur) {
            time += a - cur;
        } else {
            time += n - (cur - a);
        }
        cur = a;
    }
    cout << time << endl;
    return 0;
}