#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    string s, cmd;
    cout << "|* This is a Program to Encrypt or Convert a Text to CaesarChiper Vice Versa *|" << endl;
    cout << "Input message (only contain small letters): ";
    getline(cin, s);

    cout << endl;
    cout << "Type 'encrypt' to e encrypt message or 'convert' to convert encrypted message to a normal one." << endl;
    cout << "Input command: ";
    cin >> cmd;

    cout << endl;
    cout << "Interval of CaesarChiper (1-25): ";
    cin >> x;

    cout << endl;
    if (cmd == "encrypt") {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') continue;
            if (s[i] + x > 122) {
                s[i] = (s[i] - 96 + x) % 26 + 96; 
            } else {
                s[i] = (s[i] + x);
            }
        }
        cout << "The encrypted message is: " << s << endl;
    } else if (cmd == "convert") {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') continue;
            if (s[i] - x < 97) {
                s[i] = (s[i] + 26 - x); 
            } else {
                s[i] = (s[i] - x);
            }
        }
        cout << "The original message is: " << s << endl;
    } else {
        cout << "The command is invalid!" << endl;
    }
}