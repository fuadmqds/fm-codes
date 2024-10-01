#include <iostream>
using namespace std;

int main() {
    int N, i;
    cin >> N;

    i = N;
    while(i > 0) {
        if(N % i == 0) {
            cout << i << endl;
        }
        i--;
    }
}

//versi menggunakan iostream