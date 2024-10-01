// Algoritma Merge Sort
// Time Complexity: O(N log N)
#include <bits/stdc++.h>
using namespace std;

// Algoritma untuk menggabungkan 2 array yang terurut
merge(int arr[], int aLeft, int aRight, int bLeft, int bRight) {
    int size = bRight - aLeft + 1;
    int temp[size];
    int tIndex = 0;
    int aIndex = aLeft;
    int bIndex = bLeft;

    // Selama kedua subarray masih ada isinya, ambil yang terkecil dan isi ke temp
    while (aIndex <= aRight && bIndex <= bRight) {
        if (arr[aIndex] <= arr[bIndex]) {
            temp[tIndex] = arr[aIndex];
            aIndex++;
        } else {
            temp[tIndex] = arr[bIndex];
            bIndex++;
        }
        tIndex++;
    }

    // Masukkan subarray yang masih bersisa ke temp
    // Hanya salah satu dari kedua while ini yang akan dieksekusi
    while (aIndex <= aRight) {
        temp[tIndex] = arr[aIndex];
        aIndex++;
        tIndex++;
    }

    while (bIndex <= bRight) {
        temp[tIndex] = arr[bIndex];
        bIndex++;
        tIndex++;
    }

    // Salin isi array temp ke arr
    for (int i = 0; i < size; i++) {
        arr[aLeft + i] = temp[i];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left == right) {
        return; // Tinggal 1 elemen, sudah pasti terurut
    } else {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, mid + 1, right);
    }
}

int main() {
    int arr[8] = { 5, 2, 7, 6, 1, 8, 9, 3 };

    mergeSort(arr, 0, 7);

    for (int i = 0; i < 8; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}