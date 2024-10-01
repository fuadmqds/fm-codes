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
#define out(a, b) cout << a << ' ' << b << endl;
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;

    int n;
    cin >> n;

    deque<int> d;
    bool rev = 0;

    for (int i = 0; i < n; i++) {
        str s;
        int x, y;
        cin >> s;
        if (s == "add") {
            if (rev) {
                cin >> x >> y;
                for (int j = 0; j < y; j++) {
                    d.push_front(x);
                }
                cout << d.size();
            }
            else {
                cin >> x >> y;
                for (int j = 0; j < y; j++) {
                    d.push_back(x);
                }
                cout << d.size();
            }
        }
        else if (s == "del") {
            cin >> y;
            if (rev) {
                cout << d.back();
                for (int j = 0; j < y; j++) {
                    d.pop_back();
                }
            }
            else {
                cout << d.front();
                for (int j = 0; j < y; j++) {
                    d.pop_front();
                }
            }
        }
        else {
            rev = !rev;
            continue;
        }
        cout << '\n';
    }
    return 0;
}
// FM