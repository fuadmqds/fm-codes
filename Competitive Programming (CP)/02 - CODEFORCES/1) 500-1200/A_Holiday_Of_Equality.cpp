#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, max = -1, burles = 0;
    cin >> n;
    
    vector <int> a(n);
    
    for (int &i : a) {
        cin >> i;
        if (i > max) {
            max = i;
        }
    }

    for (int i : a) {
        if (i < max) {
            burles += max - i;
        }
    }
    
    cout << burles << endl;
    return 0;
}