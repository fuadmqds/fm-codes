#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    string t;
    cin >> s >> t;

    //melakukan perulangan selama t masih ditemukan pada s
    while (s.find(t) != string::npos) {
        s.erase(s.find(t), t.length()); //menghapus kemunculan t pada s sebanyak panjang t yg ditemukan
    }
    cout << s << endl;
}

//Nb: nilai dari string::nops = -1