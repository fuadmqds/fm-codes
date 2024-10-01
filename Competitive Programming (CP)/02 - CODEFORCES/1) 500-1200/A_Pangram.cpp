#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    if (n < 26) {
        cout << "NO" << endl;
    } else {
        bool alphabet[26] = {false}; 
        for (int i = 0; i < n; i++) {
            if (s[i] < 'a') {
                s[i] += 'a' - 'A';
            }
            alphabet[s[i] - 'a'] = true;
        }
        for (int i = 0; i < 26; i++) {
            if (alphabet[i] == false ) {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}