#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t, n;
    cin >> t;

    while (t--) {
        string s;
        cin >> n >> s;

        map<int, int> hz;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            hz[s[i]]++;
            if (hz[s[i]] == 1) {
                cnt += 2;
            } else {
                cnt += 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
// FM


/*
#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t, n;
    cin >> t;

    while (t--) {
        string s; 
        cin >> n >> s;

        int hz[26] = {0}, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (hz[s[i] - 'A'] == 0) {
                cnt += 2;
            } else {
                cnt += 1;
            }
            hz[s[i] - 'A']++;
        }
        cout << cnt << endl;
    }
    return 0;
}
// FM
*/