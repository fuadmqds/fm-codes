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
    
    string s, w, a = "", b = "";
    cin >> s >> w;

    bool f = true;
    for (auto c : s) {
        if (c == '|') {f = false; continue;}
        if (f) a += c;
        else b += c;
    }

    for (auto c : w) {
        if (a.size() < b.size()) a += c;
        else b += c;
    }

    if (a.size() != b.size()) {
        cout << "Impossible";
    } else {
        cout << a << '|' << b;
    }
    return 0;
}
// FM

/*
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
 
    string s, w, sub1, sub2;
    getline(cin, s);
    cin >> w;
 
    sub1 = s.substr(0, s.find('|'));
    sub2 = s.substr(s.find('|') + 1, s.length());
 
    int ls1 = sub1.length();
    int ls2 = sub2.length();
    int lw = w.length();
 
    if ((ls1 + ls2 + lw) & 1 || ls1 > ls2 + lw || ls2 > ls1 + lw) {
        cout << "Impossible";
        return 0;
    }
 
    int cur = 0;
    if (ls1 > ls2) {
        while (ls1 != cur + ls2) {
            sub2 += w[cur];
            cur++;
        }
    }
    else if (ls1 < ls2) {
        while (ls1 + cur != ls2) {
            sub1 += w[cur];
            cur++;
        }
    }
 
    w.erase(0, cur);
    lw = w.length();
 
    if (lw != 0) {
        cout << sub1 << w.substr(0, lw / 2) << '|' << sub2 << w.substr(lw / 2, lw);
    }
    else {
        cout << sub1 << '|' << sub2;
    }
    return 0;
}
// FM
*/