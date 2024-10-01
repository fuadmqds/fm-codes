#include <iostream>
#include <cstirng>
#include <ctype.h>
using namespace std;

int main() {
    char pass[101];
    cin >> pass;
    int upperCase = 0;
    int lowerCase = 0;
    int number = 0;
    int symbol = 0;

    int len = strlen(pass);
    for (int i = 0; i < len; i++) {
        if (pass[i] == toupper(pass[i])) upperCase++;
        else if (pass[i] == tolower(pass[i])) lowerCase++;
        else if (isdigit(pass[i])) number++;
        else symbol++;
    }

    cout << "" << upperCase << endl;
    cout << "" << upperCase << endl;
    cout << "" << upperCase << endl;
    cout << "" << upperCase << endl;
}