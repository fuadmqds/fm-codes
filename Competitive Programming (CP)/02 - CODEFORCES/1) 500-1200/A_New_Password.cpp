#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, k, idx = 0;
    char c[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        if (n == k) {
            cout << c[i];
        } else {
            cout << c[idx % k];
            idx++;
        }
    }
    return 0;
}