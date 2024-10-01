#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ls = s.size();
    for (int i = 0; i < ls; i++) {
        if (s[i] >= 'a') {
            s[i] -= 'a' - 'A';
        } else if (s[i] >= 'A') {
            s[i] += 'a' - 'A';
        }
    }
    cout << s << endl;
}