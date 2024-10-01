#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, a, b;
    string s;
    cin >> n >> s;

    char tmp;
    for (int i = 0; i < n; i++) {
        if (s[i] != '.') {
            tmp = s[i];
            a = i + 1;
            b = i;
            break;
        }
    }

    for (int i = a; i < n; i++) {
        if (s[i] != tmp) {
            if (s[i] == '.' && s[i-1] == 'L') a = i;
            else b = i + 1;
            break;
        }
    }

    cout << a << ' ' << b << endl;
    return 0;
}
// FM