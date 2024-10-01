#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector <int> roundNumbers;
        
        int div = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit > 0) {
                roundNumbers.push_back(digit * div);
            }
            n /= 10;
            div *= 10;
        }

        cout << roundNumbers.size() << endl;
        for (int i : roundNumbers) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}