#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, cntFi = 0, cntSe = 0;
    string s, fi, se;
    vector<string> team;

    cin >> n;
    while (n--) {
        cin >> s;
        fi = s;

        team.emplace_back(s);
    }

    for (string i : team) {
        if (i == fi) {
            cntFi++;
        } else {
            se = i;
            cntSe++;
        }
    }

    if (cntFi > cntSe) {
        cout << fi << endl;
    } else {
        cout << se << endl;
    }
    return 0;
}
// FM