// Program untuk mengurutkan suatu array menggunakan algoritma insertion sort
#include <iostream>
using namespace std;

int insertionSort(int arr[], int N) {
    for (int i = 2; i <= N; i++) {
        int j = i;
        while ((j > 1) && (arr[j] < arr[j-1])) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, N);
    for (int i = 1; i <= N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}