/* Demonstrasi penggunaan karakter dan string */

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int lstr = str.length();
    for (int i = 0; i < lstr; i++)
        str[i] = toupper(str[i]);
    
    cout << str << "\n";
}