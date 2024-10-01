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

/*
Observation:
Sort the array 'x'
Using binary search to find the minimum 'max_sum' such that the given array can be 
divided into 'k' or less subarray whose sum of each subarray is not more than 'max_sum'
*/

const ll MAX_SUM = 2e5 * 1e9;

// true if the given array 'v' can be divided into 'k' or less subarray
// and sum of each subarray is at most 'max_sum'
bool check(vc<ll> v, int k, ll max_sum) {
    int sub_arr = 0;
    ll cur_sum = 0;
    for (ll i : v) {
        if (i > max_sum) { return false; }

        if (cur_sum + i > max_sum) {
            sub_arr++;
            cur_sum = 0;
        }
        cur_sum += i;
    }
    if (cur_sum > 0) { sub_arr++; }

    return sub_arr <= k;
}

int main() {
    Bismillah;
    
    int n, k;
    cin >> n >> k;
    vc<ll> x(n);
    for (ll &i : x) { cin >> i; }

    ll l = 1, r = MAX_SUM, ans;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(x, k, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}
// FM