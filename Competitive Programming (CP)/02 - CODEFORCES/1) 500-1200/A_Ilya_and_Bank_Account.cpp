#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    string s, temp1, temp2;
    cin >> s;
    
    if (s[0] != '-') {
        cout << s << endl;
        return 0;
    }

    int ls = s.size();
    temp1 = s, temp2 = s;
    temp1.erase(ls-1, 1);
    temp2.erase(ls-2, 1);
    
    if (temp1 == "-0" || temp2 == "-0") {
        cout << 0 << endl;
        return 0;
    }

    // Reverse logic
    if (temp1 < temp2) {
        cout << temp1 << endl;
    } else {
        cout << temp2 << endl;
    }

    return 0;
}