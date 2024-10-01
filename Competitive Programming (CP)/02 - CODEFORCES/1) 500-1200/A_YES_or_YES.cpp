#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    
    while (t--) {
        string s; cin >> s;

        if (s == "YES" || s == "YEs" || s == "YeS" || s == "yES" || s == "yeS" || s == "yEs" || s == "Yes" || s == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}