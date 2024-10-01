#include "iostream"
#include "vector"
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector <int> y(n);
    for (int &i : y) {
        cin >> i;
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (5 - y[i] >= k) {
            ans++;
        }
    }

    cout << ans / 3 << endl;
    return 0;
}