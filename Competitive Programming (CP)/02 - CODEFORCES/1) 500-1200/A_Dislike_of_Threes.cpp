#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector <int> sequence;
    for (int i = 1; i <= 10000; i++) {
        if (i % 3 == 0 || i % 10 == 3) {
            continue;
        }
        sequence.push_back(i);
    }

    while (t--) {
        int k;
        cin >> k;
        
        cout << sequence[k-1] << endl;
    }
}