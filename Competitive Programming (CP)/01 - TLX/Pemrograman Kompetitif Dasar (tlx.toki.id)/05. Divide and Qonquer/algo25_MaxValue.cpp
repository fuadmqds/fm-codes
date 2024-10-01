// Algoritma Pemcarian Nilai Terbesar Secara Divide and Conquer (Inefficient)
// Time Complexity: O(N)
#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int left, int right) {
    if (left == right) {
        return arr[left];
    } else {
        int mid = (left + right) / 2;
        int leftMax = findMax(arr, left, mid);
        int rightMax = findMax(arr, mid + 1, right);
        return max(leftMax, rightMax);
    }
}

int main() {
    int arr[9] = { 2, 5, 7, 4, 6, 1, 3, 8, 9 };

    cout << findMax(arr, 0, 8) << "\n";
    return 0;
}