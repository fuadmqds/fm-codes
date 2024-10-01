#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int count = 1, maxCount = -1000;

    int ls = s.length();
    for (int i = 0; i < ls-1; i++) {
        if (s[i] == s[i+1]) {
            count++;
        } else {
            count = 1;
        }
        if (maxCount < count) {
            maxCount = count;
        }
    }

    if (maxCount < 7) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}