// Binary Search Algorithm
// Time Complexity: O(log N)
#include <bits/stdc++.h>
using namespace std;

// Binary search algorithm will only works on a sorted array

// This is the normal binary search algorithm
int binarySearch1(const int arr[], int n, int x) {
    int l = 0, r = n - 1, ans;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

// This binary search is a bit shorter and without variable ans
int binarySearch2(const int arr[], int n, int x) {
    int l = 0, r = n;
    while (l < r) {
        int mid = (l + r) / 2;
        if (arr[mid] >= x) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}

int main() {
    // given a sorted array with n elements find the index of the number x
    int n = 10, x = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 

    cout << binarySearch1(arr, n, x) << '\n';
    cout << binarySearch2(arr, n, x) << '\n';
    return 0;
}