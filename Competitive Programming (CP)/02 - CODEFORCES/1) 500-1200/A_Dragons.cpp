#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    int x[n], y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    
    bool visited[1001] = {false};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[j]) {
                if (s > x[j]) {
                    s += y[j];
                    visited[j] = true;
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (visited[i] == false) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}