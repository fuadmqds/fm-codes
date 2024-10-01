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
make vector hz to count the number of times element in the array a appears
the answer is the smallest of either the first element which appears zero times,
the second smallest element of the array that only appear once
*/

int main() {
    Bismillah;
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vc<int> a(n);
        vc<int> hz(n + 1);

        for (int &i : a) {
            cin >> i;
            hz[i]++;
        }
        
        int cnt = 0;
        for (int i = 0; i <= n; ++i) {
            if (hz[i] == 1) { cnt++; }

            if (cnt == 2 || hz[i] == 0) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
// FM