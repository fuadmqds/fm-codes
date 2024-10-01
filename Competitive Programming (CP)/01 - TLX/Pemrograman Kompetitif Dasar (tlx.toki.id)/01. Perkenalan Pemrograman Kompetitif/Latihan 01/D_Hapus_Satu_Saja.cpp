#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    bool check = false;
    int lA = A.length();
    int lB = B.length();
    if (lA - lB == 1) {
        for (int i = 0; i < lA; i++) {
            if (A[i] == B[i] || A[i] == B[i-1]) {
                check = true;
            }
        }
    }

    if (check) {
        cout << "Tentu saja bisa!" << endl;
    } else {
        cout << "Wah, tidak bisa :(" << endl;
    }
    return 0;
}