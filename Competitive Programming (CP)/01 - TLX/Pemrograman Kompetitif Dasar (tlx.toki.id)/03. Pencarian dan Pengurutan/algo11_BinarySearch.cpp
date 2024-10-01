// Contoh Program Binary Search
// Time Complexity: O(log N)
#include <bits/stdc++.h>
using namespace std;

void BinarySearch(int h[], int x, int N) {
    int res = -1, left = 0, right = N-1;
    while (left <= right && res == -1) {
        int middle = (left + right) / 2;
        if (x < h[middle]) {
            right = middle-1;
        } else if (x > h[middle]) {
            left = middle+1;
        } else {
            res = middle;
            break;
        }
    }
    if (res == -1) {
        cout << "Beri hadiah lain" << endl;
    } else {
        cout << res << endl;
    }
}

int main() {
    int N = 10;
    int x = 7;
    int h[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 0 based array
    
    BinarySearch(h, x, N);  
    return 0;
}