#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    string s;
    cin >> s;

    int l2d; // l2d = last 2 digits
    if (s.length() == 1) {
        l2d = int(s[0]);
    } else {
        l2d = stoi(s.substr(s.length()-2, 2));
    }
    cout << (l2d % 4 == 0 ? 4 : 0) << endl;    
    return 0;
}
// FM