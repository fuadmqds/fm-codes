#include <iostream>
#include <cstring>
using namespace std;

string binary(int x) {
    if (x == 1) {
        return "1";
    } else if (x % 2 == 0) {
        return binary(x / 2) + "0";
    } else {
        return binary(x / 2) + "1";
    }
}

int main() {
    int N;
    cin >> N;

    cout << binary(N) << endl;
}