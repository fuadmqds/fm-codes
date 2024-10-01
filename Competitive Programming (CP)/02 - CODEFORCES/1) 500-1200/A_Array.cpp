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
#define in insert
#define out(a, b) cout << a << ' ' << b << endl;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;

    int n, min = 0, plus = 0;
    cin >> n;

    vc<int> v(n);
    for (int& i : v) {
        cin >> i;
        if (i < 0) min++;
        else if (i > 0) plus++;
    }

    set<int> a;
    set<int> b;
    set<int> c;

    sort(all(v));
    
    if (plus == 0) {
        b.in(v[0]);
        b.in(v[1]);
        v.erase(v.begin());
        v.erase(v.begin());
    }

    a.in(v[0]);
    v.erase(v.begin());

    for (int i : v) {
        if (i > 0) b.in(i);
        else if (i < 0) c.in(i);
        else c.in(i);
    }

    cout << a.size() << ' ';
    for (int i : a) cout << i << ' ';
    cout << "\n" << b.size() << ' ';
    for (int i : b) cout << i << ' ';
    cout << "\n" << c.size() << ' ';
    for (int i : c) cout << i << ' ';
    cout << "\n";
    return 0;
}
// FM