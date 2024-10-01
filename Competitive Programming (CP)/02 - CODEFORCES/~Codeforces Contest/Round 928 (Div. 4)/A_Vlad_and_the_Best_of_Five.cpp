#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        string s; cin >> s;

        int countA = 0, countB = 0;
        if (s[0] == 'A') countA++;
        else countB++;
        if (s[1] == 'A') countA++;
        else countB++;
        if (s[2] == 'A') countA++;
        else countB++;
        if (s[3] == 'A') countA++;
        else countB++;
        if (s[4] == 'A') countA++;
        else countB++;

        if (countA > countB) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }
}