#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int input = n;

    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit * digit * digit;
        n /= 10;
    }

    if (input == sum) {
        cout << input << " Is an Amstrong number" << endl;
    } else {
        cout << input << " Is not an Amstrong number" << endl;
    }
    return 0;
}