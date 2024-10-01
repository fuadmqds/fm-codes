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
    
    int n, s, d;
    cin >> n;
    vc<pair<int, int>> friends(n); // end, start
    
    for (int i = 0; i < n; ++i) {
        cin >> s >> d;
        friends[i] = {s + d, s};
    }

    sort(all(friends));
    int ans = 0, start_time = 0;
    for (int i = 0; i < n; ++i) {
        if (friends[i].se >= start_time) {
            ans++;
            start_time = friends[i].fi;
        }
    }

    cout << ans << '\n';
    return 0;
}
// FM

/*
#include <bits/stdc++.h>
using namespace std;

vector <pair<int, int>> a; // start, end

void sortByEndTime(int N) {
    sort(a.begin(), a.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });
}

int solveActivitySelection(int N) {
    sortByEndTime(N);
    int count = 0;
    int startTime = 0;
    for (int i = 0; i < N; ++i) {
        if (a[i].first >= startTime) {
            count++;
            startTime = a[i].second;
        }
    }
    return count;
}

int main() {
    int N, x, y;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> x >> y;
        y = x + y;
        a.push_back(make_pair(x, y));
    }

    cout << solveActivitySelection(N) << '\n';
    return 0;
}
*/