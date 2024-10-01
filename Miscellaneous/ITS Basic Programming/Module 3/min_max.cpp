#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = -10000000;
    int min = 10000000;
    for (int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
    
    return 0;
}