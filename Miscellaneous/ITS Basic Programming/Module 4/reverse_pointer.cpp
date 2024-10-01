#include <iostream>
using namespace std;

//Reverse array function
void reverse(int *arr, int n) {
    int *start = arr;
    int *end = arr + (n-1);

    while (start < end) {
        swap(*start, *end);

        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    //Before reverse
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverse(arr, n);

    //After reverse
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}