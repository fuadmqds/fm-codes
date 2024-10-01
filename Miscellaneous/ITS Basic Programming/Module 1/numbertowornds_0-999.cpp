#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string words[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Sebelas"};

    if (n < 0 || n > 999) {
        cout << "Number out of range";
    } else {
        if (n == 0) cout << "Nol";
        if (n < 12)
            cout << words[n];
        else if (n < 20) 
            cout << words[n % 10] + " Belas";
        else if (n < 100) 
            cout << words[n / 10] + " Puluh " + words[n % 10];
        else {
            cout << words[n / 100] + " Ratus ";
            if (n % 100 < 12) cout << words[n % 100];
            else if (n % 100 < 20) cout << words[n % 10] + " Belas";
            else cout << words[(n % 100) / 10] + " Puluh " + words[n % 10];
        }
    }
    return 0;
}