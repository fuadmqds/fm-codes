#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int ls = s1.length();
    int ans = 0;
    for (int i = 0; i < ls; i++) {
        if (s1[i] < 'a') {
            s1[i] += 'a' - 'A';
        }
        if (s2[i] < 'a') {
            s2[i] += 'a' - 'A';
        }
        if (s1[i] > s2[i]) {
            ans++;
            break;
        }
        if (s1[i] < s2[i]) {
            ans--;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}