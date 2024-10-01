#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin >> s;
    int ls = strlen(s);
    for (int i = ls-1; i >= 0; i--) {
        cout << s[i];
    }
    cout << endl;
    return 0;
}