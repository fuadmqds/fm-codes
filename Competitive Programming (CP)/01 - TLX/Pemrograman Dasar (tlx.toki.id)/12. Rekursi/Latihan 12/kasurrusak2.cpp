#include <iostream>
#include <cstring>
using namespace std;

string s;

bool isPalindrome(int l, int r) {
    if (l > r) {
        return 1;
    } else if (s[l] == s[r]) {
        return isPalindrome(l + 1, r - 1);
    } else {
        return 0;
    }
}

int main() {
    cin >> s;

    if (isPalindrome(0, s.length() - 1)) {
        cout << "YA";
    } else {
        cout << "TIDAK";
    }
}