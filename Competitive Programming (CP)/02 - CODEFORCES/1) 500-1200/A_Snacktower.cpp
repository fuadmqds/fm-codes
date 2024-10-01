#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n; 
    cin >> n;
    vector<bool> hold(n + 1, false);

    int top = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x == n || x == top-1) {
            hold[x] = true;
            top = x;
            int temp = top;
            for (int j = temp; j > 0; j--) {
                if (hold[j]) {
                    cout << j << " ";
                    hold[j] = false;
                    top = j;
                } else {
                    break;
                }
            }
        } else {
            hold[x] = true;
        }
        cout << endl;
    }
    return 0;
}
// FM