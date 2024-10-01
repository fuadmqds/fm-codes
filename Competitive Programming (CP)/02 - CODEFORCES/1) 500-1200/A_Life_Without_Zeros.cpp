#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define ts to_string
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define out(a, b) cout << a << ' ' << b << endl;
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;
    
    int a, b, bf, af;
    cin >> a >> b;

    bf = a + b;

    str m = ts(bf), n = "";

    for (char c : m) {
        if (c != '0') {
            n += c;
        }
    }

    bf = stoi(n);

    str p = ts(a), q = "";
    str r = ts(b), s = "";

    for (char c : p) {
        if (c != '0') {
            q += c;
        }
    }

    for (char c : r) {
        if (c != '0') {
            s += c;
        }
    }

    af = stoi(q) + stoi(s);

    cout << (bf == af ? "YES\n" : "NO\n");
    return 0;
}
// FM

/*
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int f(int x) {
    vc<int> tmp;
    while (x) {
        if (x % 10) {
            tmp.pb(x % 10);
        }
        x /= 10;
    }
    for (int i = tmp.size()-1; i >= 0; --i) {
        x = x * 10 + tmp[i];
    }
    return x;
}

int main() {
    Bismillah;
    
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    a = f(a);
    b = f(b);
    c = f(c);
    cout << (a + b == c ? "YES\n" : "NO\n");
    return 0;
}
// FM
*/