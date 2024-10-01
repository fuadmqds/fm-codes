#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int sc[5], findsc[5];

bool findMatch(int a, int b, int n) {
    if (a == n) {
        b++;
        a = b + 1;
    }
    
    if (b == n - 1) {
        for (int i = 0; i < n; i++) {
            if (sc[i] != findsc[i]) {
                return false;
            }
        }
        return true;
    }
    
    bool found = false;

    // a Win
    findsc[a] += 3;
    found |= findMatch(a + 1, b, n);
    findsc[a] -= 3;
    
    // b Win
    findsc[b] += 3;
    found |= findMatch(a + 1, b, n);
    findsc[b] -= 3;
    
    // Draw
    findsc[a]++;
    findsc[b]++;
    found |= findMatch(a + 1, b, n);
    findsc[a]--;
    findsc[b]--;

    return found;
}

int main() {
    Bismillah;
    
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> sc[i];
        }
        
        cout << (findMatch(1, 0, n) ? "YES\n" : "NO\n");
    }
    return 0;
}