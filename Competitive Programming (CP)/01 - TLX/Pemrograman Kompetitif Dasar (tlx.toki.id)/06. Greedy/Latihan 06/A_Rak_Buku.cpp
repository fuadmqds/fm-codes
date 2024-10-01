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
    
    int n, b, sum = 0, ans = 0;
    cin >> n >> b;

    vc<int> h(n);

    for (int &i : h) {
        cin >> i;
    }

    sort(rall(h));

    for (int i : h) {
        if (sum >= b) break;
        sum += i;
        ans++;
    }

    cout << ans << '\n';
    return 0;
}
// FM


// If using priority queue instead of vector
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
#define out(a, b) cout << a << ' ' << b << endl;
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;

    int n, b, sum = 0, ans = 0;
    cin >> n >> b;

    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        pq.push(a);
    }

    while (!pq.empty()) {
        if (sum >= b) break;
        sum += pq.top();
        pq.pop();
        ans++;
    }

    cout << ans << '\n';
    return 0;
}
*/