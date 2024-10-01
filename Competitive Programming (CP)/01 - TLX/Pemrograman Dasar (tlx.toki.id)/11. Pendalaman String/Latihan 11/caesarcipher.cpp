#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    int ls = s.length(); //mencari panjang string s, lalu dimasukkan ke var ls
    for (int i = 0; i < ls; i++) { //melakukan loop sebanyak ls kali
        int ord = s[i] - 'a'; //mencari urutan/order dari s[i] sesuai alfabet
        int en = (ord + k) % 26; //mengganti urutan menjadi k posisi di depan (jika urutan = 26 kembali ke 0)
        s[i] = en + 'a'; //s[i] yang sekarang akan memiliki urutan alfabet s[i] + k
    }
    cout << s << endl; //mencetak s yang sekarang
}