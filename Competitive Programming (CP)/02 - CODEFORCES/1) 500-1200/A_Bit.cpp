#include <iostream>
using namespace std;

int main() {
    int X = 0;
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        if (s[1] == '+') X++;
        else X--;
    }
    cout << X << endl;
    return 0;
}