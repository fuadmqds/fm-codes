#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    bool reverse = true;
    int ls = s.length();

    if (ls != t.length()) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < ls; i++) {
        if (s[i] != t[ls-i-1]) {
            reverse = false;
            break;  
        }
    }
    
    if (reverse) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}