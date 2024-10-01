#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int ls = s.length();
    bool alphabet[26] = {false};
    for (int i = 1; i < ls-1; i += 3) {
        if (s[i] < 'a') {
            s[i] += 'a' - 'A';
        }
        alphabet[s[i] - 'a'] = true;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (alphabet[i]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}