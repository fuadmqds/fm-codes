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

    int n, a;
    cin >> n;

    map<int, int> hz;

    for (int i = 0; i < n; i++) {
        cin >> a;
        ++hz[a];
    }

    for (map<int, int>::iterator it = hz.begin(); it != hz.end(); ++it) {
        if (it->se > (n + 1) / 2) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
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

    int n;
    cin >> n;

    vc<int> a(n);
    map<int, int> hz;

    for (int &i : a) {
        cin >> i;
        hz[i]++;
    }

    for (int i : a) {
        if (hz[i] > (n + 1) / 2) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
// FM
*/