#include <iostream>
using namespace std;

int main() {
    int y; 
    cin >> y;

    for (int i = y + 1;; i++) {
        int temp = i;
        int count = 0;
        bool used[10] = {false};
        
        while (temp > 0) {
            if (!used[temp % 10]) {
                used[temp % 10] = true;
                count++;
            }
            temp /= 10;
        }
        if (count == 4) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
