#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int ls = s.length();
    for (int i = 0; i < ls; i++) {
        if ((s[i] >= 'A') && (s[i] <= 'Z')) {
            s[i] += 'a' - 'A'; // Menkonversi huruf besar ke huruf kecil
            s.insert(i, "_"); // Menambahkan underscore
            i++; // Skip perulangan pada underscore
        } else if (s[i] == '_') {
            s[i+1] -= 'a' - 'A'; // Menkonversi huruf kecil ke huruf besar
            s.erase(i, 1); // Menghapus underscore
        }
        ls = s.length(); // Mengupdate panjang string
    }
    cout << s << endl;
}