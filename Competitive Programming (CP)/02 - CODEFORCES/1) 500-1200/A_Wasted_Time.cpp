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

    int n, k, a, b, x, y;
    double distance = 0.0, time = 0.0;

    cin >> n >> k;
    cin >> x >> y;
    
    for (int i = 1; i < n; i++) {
        cin >> a >> b;

        distance += sqrt(abs(a - x) * abs(a - x) + abs(b - y) * abs(b - y));
        x = a; y = b;
    }

    time = distance / 50.0;
    cout << fixed << setprecision(9) << time * k << endl;
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

    int n, k, a, b, x, y;
    double distance = 0.0, time = 0.0;

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (i == 0) {
            x = a; y = b;
            continue;
        }

        distance += sqrt(abs(a - x) * abs(a - x) + abs(b - y) * abs(b - y));
        x = a; y = b;
    }

    time = distance / 50.0;
    cout << fixed << setprecision(9) << time * k << endl;
    return 0;
}
// FM

*/