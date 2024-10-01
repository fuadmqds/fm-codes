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
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;
    
    str word[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (1 <= i && i <= 9) {
            cout << word[i] << '\n';
        } else {
            cout << (i & 1 ? "odd\n" : "even\n");
        }
    }
    return 0;
}
// FM