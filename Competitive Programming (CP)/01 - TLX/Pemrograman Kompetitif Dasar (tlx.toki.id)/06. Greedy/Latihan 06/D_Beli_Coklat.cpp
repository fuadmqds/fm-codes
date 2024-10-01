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
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
    Bismillah;
    
    ll n, d, h, b;
    cin >> n >> d;

    vc<pair<ll, ll>> cho(n); // chocolate: price, money
    for (ll i = 0; i < n; ++i) {
        cin >> h >> b;
        cho[i] = {h, b};
    }

    sort(all(cho));
    ll cur_money = d, cur_duck = 0;
    for (ll i = 0; i < n; ++i) {
        if (cur_money / cho[i].fi > cho[i].se) { // if the remaining money is enough
            cur_duck += cho[i].se;
            cur_money -= cho[i].fi * cho[i].se;
        } else { // if not, then pay according to remaining amount of money
            cur_duck += cur_money / cho[i].fi;
            cur_money %= cho[i].fi;
            break;
        }
    }

    cout << cur_duck << '\n';
    return 0;
}
// FM