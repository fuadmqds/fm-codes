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

    int n, cnt = 0;
    string s;
    cin >> n >> s;

    vc<int> ans;

    s += 'W';
    for (int i = 0; i < n + 1; i++) {
        if (s[i] == 'B') {
            cnt++;
        }
        if (s[i] == 'W') {
            if (cnt > 0) {
                ans.eb(cnt);
                cnt = 0;
            }
        }
    }

    cout << ans.size() << "\n";
    for (int i : ans) {
        cout << i << ' ';
    }
    return 0;
}

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
    string s;
    cin >> n >> s;
    
    vc<int> ans;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'W') continue;
        int j = i;
        while (j < n && s[j] == 'B') j++;
        ans.eb(j - i + 1);
        i = j;
    }

    cout << ans.size() << "\n";
    for (int i : ans) cout << i << ' ';
    return 0;
}
*/