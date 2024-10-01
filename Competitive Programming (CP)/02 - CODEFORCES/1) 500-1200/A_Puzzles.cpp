#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int f[m];   
    for (int i = 0; i < m; i++) {
        cin >> f[i];
    }

    sort(f, f + m);
    
    int min = 999999;
    for (int i = 0; i < m; i++) {
        if (i + n <= m) {
            if (f[n+i-1] - f[i] < min) {
                min = f[n+i-1] - f[i];
            }
        }
    }
    cout << min << endl;
    return 0;
}