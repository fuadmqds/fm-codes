#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
    }

    int count = 0;
    int mySum = 0;
    sort(a, a + n);

    for (int i = n-1; i >= 0; i--) {
        mySum += a[i];
        count++;
        if (mySum > totalSum - mySum) {
            break;
        }
    }
    cout << count << endl;
    return 0;
}