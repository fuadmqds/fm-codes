#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(string c) {
    int lc = c.length();
    string sub = "";
    for (int i = 1; i < lc - 1; i++) {
        sub += c[i];
    }
    if (lc <= 1) {
        return true;
    } else {
        return (c[0] == c[lc - 1]) && isPalindrome(sub);
    }
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s)) {
        cout << "YA" << endl;
    } else {
        cout << "BUKAN" << endl;
    }
}