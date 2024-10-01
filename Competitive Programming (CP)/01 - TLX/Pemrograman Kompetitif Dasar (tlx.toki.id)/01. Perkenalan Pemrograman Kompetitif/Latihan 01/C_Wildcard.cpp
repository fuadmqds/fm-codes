#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, bf, af;
    int n;
    cin >> s >> n;

    int star = s.find("*");
    bf = s.substr(0, star);
    af = s.substr(star+1);

    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (s.length()-1 > str.length()) {
            continue;
        } else {
            string before = str.substr(0, star);
            string after = str.substr(str.length() - af.length(), af.length());
            if (bf == before && af == after) {
                cout << str << endl;
            }
        }
    }    
}