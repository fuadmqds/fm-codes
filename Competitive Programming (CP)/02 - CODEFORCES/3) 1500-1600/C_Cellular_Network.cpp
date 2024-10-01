// With binary search O(N log N)
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

int binarySearch(const vc<int> &v, int cur) { // towers and current city
    int l = 0, r = v.size();
    while (l < r) {
        int mid = (l + r) / 2;
        if (v[mid] >= cur) { r = mid; }
        else { l = mid + 1; }
    }
    return l;
}

int main() {
    Bismillah;

    int n, m;
    cin >> n >> m;
    vc<int> cities(n), towers(m);

    for (int& i : cities) cin >> i;
    for (int& j : towers) cin >> j;

    int minR = 0;
    for (int i = 0; i < n; ++i) {
        int idx_right = binarySearch(towers, cities[i]);
        int idx_left = idx_right - 1;

        int cur_min = 2e9;
        if (idx_right < m) {
            cur_min = min(cur_min, towers[idx_right] - cities[i]);
        }
        if (idx_left >= 0) {
            cur_min = min(cur_min, cities[i] - towers[idx_left]);
        }
        minR = max(minR, cur_min);
    }
    cout << minR << '\n';
    return 0;
}
// FM

/*
// With Two Pointers O(N)
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
#define Bismillah cin.tie(0)->sync_with_stdio(0);

int main() {
    Bismillah

    int n, m;
    cin >> n >> m;
    vc<int> a(n), b(m), dist(n, 2e9);

    for (int& i : a) { cin >> i; }
    for (int& j : b) { cin >> j; }

    int cur = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        while (cur < (m - 1) && b[cur + 1] <= a[i]) { cur++; }
        dist[i] = min(dist[i], abs(a[i] - b[cur]));
    }
    cur = m - 1;
    for (int i = n - 1; i >= 0; --i) {
        while (cur > 0 && b[cur - 1] >= a[i]) { cur--; }
        dist[i] = min(dist[i], abs(a[i] - b[cur]));
    }
    for (int i = 0; i < n; ++i) {
        ans = max(ans, dist[i]);
    }
    cout << ans << '\n';
    return 0;
}
// FM
*/

/*
// Naive Approach O(N^2)
int max_distance = -1;
for (int i = 0; i < n; ++i) {
    int min_distance = 2e9;
    for (int j = 0; j < m; ++j) {
        if (min_distance > abs(cities[i] - towers[j])) {
            min_distance = abs(cities[i] - towers[j]);
        }
    }
    if (max_distance < min_distance) {
        max_distance = min_distance;
    }
}
// maximum distance from the minimum distance of each town to the tower
cout << max_distance << endl;
*/