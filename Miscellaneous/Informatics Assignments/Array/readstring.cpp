/* Demonstrasi penggunaan karakter dan string*/

#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

string upperCase(string str) {
    for (int i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);
    return str;
}

int main() {
    string s;
    cin >> s;

    while (s != "STOP") {
        cout << upperCase(s) << "\n";
        cin >> s;
    }
}