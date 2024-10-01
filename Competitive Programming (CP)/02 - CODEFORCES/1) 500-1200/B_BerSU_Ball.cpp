#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first,
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    int n, m, cnt = 0, a[101], b[101];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for (int j = 0; j < m; j++) cin >> b[j];

    sort(a, a + n);
    sort(b, b + m);

    int x = 0, y = 0;
    while (x < n && y < m) {
        if (abs(a[x] - b[y]) <= 1) {
            cnt++;
            x++;
            y++;
        }
        else if (a[x] < b[y]) {
            x++;
        }
        else {
            y++;
        }
    }

    cout << cnt << endl;
    return 0;
}
// FM

/*
#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first,
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    int n, m, cnt = 0;

    cin >> n;
    vc <int> a(n);
    for (int &i : a) cin >> i;

    cin >> m;
    vc <int> b(m);
    for (int &j : b) cin >> j;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(a[i] - b[j]) <= 1) {
                cnt++;
                b[j] = 9999;
                break;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
// FM
*/