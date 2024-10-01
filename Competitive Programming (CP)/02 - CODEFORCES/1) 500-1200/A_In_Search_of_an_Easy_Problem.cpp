#include <iostream>
using namespace std;

int main() {
    int n, arr;
    cin >> n;

    while (n--) {
        cin >> arr;
        if (arr == 1) {
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}