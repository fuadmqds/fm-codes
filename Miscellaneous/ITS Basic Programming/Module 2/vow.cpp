#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    
    getline(cin, s);

    int ls = s.length();
    int A = 0, I = 0, U = 0, E = 0, O = 0;
    for (int i = 0; i < ls; i++) {
        if (s[i] == 'a') A++;
        else if (s[i] == 'i') I++;
        else if (s[i] == 'u') U++;
        else if (s[i] == 'e') E++;
        else if (s[i] == 'o') O++;
    }
    cout << "A/a = " << A << endl;
    cout << "I/i = " << I << endl;
    cout << "U/u = " << U << endl;
    cout << "E/e = " << E << endl;
    cout << "O/o = " << O << endl;
    
}