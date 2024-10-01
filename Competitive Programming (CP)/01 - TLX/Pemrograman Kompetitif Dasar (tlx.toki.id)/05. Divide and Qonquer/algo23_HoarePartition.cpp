// Partisi Hoare
// Time Complexity: O(N)
#include <bits/stdc++.h>
using namespace std;

void partition(int arr[], int left, int right, int pos) {
    int pLeft = left;
    int pRight = right;
    while (pLeft <= pRight) {
        while (arr[pLeft] <= pos) {
            pLeft++;
        }
        while (arr[pRight] > pos) {
            pRight--;
        }
        if (pLeft <= pRight) {
            swap(arr[pLeft], arr[pRight]);
            pLeft++;
            pRight--;
        }
    }
}

int main() {
    int arr[9] = { 2, 5, 7, 4, 6, 1, 3, 8, 9 };

    partition(arr, 0, 8, 5);

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}