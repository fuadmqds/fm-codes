#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int Sl = int(s[0]) + int(s[1]) + int(s[2]);
        int Sr = int(s[3]) + int(s[4]) + int(s[5]);

        if (Sl == Sr) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }   
    }
    return 0;
}