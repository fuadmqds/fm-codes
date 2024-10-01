#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    long long N;
    while (N) {
        cin >> N;
        if (N == 0) break;

        long long sqrtN = sqrt(N);
        if (sqrtN * sqrtN == N) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}

int main() {
    Bismillah;
    
    solve();
    return 0;
}
