#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n-1; i++) {
        if (a[i] < a[i+1]) {
            int temp = a[i];
            a[i] = a[i+1];
            a[i] = temp;
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] >= a[k] && a[i] > 0) {
            count++;
        }
    }
    cout << count << endl;
}