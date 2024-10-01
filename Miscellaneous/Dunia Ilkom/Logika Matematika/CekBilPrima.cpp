#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input bilangan : ";
    cin >> n;
    cout << endl;

    bool prime = true;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime) {
        cout << n << " adalah bilangan prima" << endl;
    } else {
        cout << n << " bukan bilangan prima" << endl;
    }
    return 0;
}