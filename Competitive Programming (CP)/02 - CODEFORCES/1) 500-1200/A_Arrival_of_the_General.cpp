#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n+1];
    int max = -99999, min = 99999;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (max < a[i]) {
            max = a[i];
        }
        if (min > a[i]) {
            min = a[i];
        }
    }

    int idxMax = 99999, idxMin = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == max && idxMax > i) {
            idxMax = i;
        } else if (a[i] == min && idxMin < i) {
            idxMin = i;
        }
    }
    
    if (idxMax > idxMin) {
        cout << (idxMax - 1) + (n - idxMin) - 1 << endl;
    } else {
        cout << (idxMax - 1) + (n - idxMin) << endl;
    }
    return 0;
}