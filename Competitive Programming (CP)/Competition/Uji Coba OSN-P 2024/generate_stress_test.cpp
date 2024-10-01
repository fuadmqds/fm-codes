#include <iostream>
using namespace std;

int main() {
    string s = "";
    for (int i = 0; i < 22222; ++i) {
        s += "O";
    }
    for (int i = 0; i < 22222; ++i) {
        s += "S";
    }
    for (int i = 0; i < 22222; ++i) {
        s += "N";
    }
    s += "OO";
    cout << s.size();
}