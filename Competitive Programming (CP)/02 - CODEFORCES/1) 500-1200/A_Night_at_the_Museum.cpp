#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0, cur = 'a';
    for (int i = 0; i < s.length(); i++) {
        int temp = abs(cur - int(s[i]));
        count += min(temp, abs(26 - temp));
        cur = s[i];
    }

    cout << count << endl;
    return 0;
}