#include <iostream>
using namespace std;
using ull = unsigned long long;

int main() {
    int n;
    string s;
    cin >> n >> s;

    ull cntO = 0, cntS = 0, cntN = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'O') {
            cntO++;
        } else if (s[i] == 'S') {
            cntS += cntO;
        } else {
            cntN += cntS;
        }
    }

    cout << cntN << '\n';
    return 0;
}