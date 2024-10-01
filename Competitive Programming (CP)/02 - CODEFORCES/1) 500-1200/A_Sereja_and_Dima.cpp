#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;

    vector <int> v(n);
    
    for (int &i : v) {
        cin >> i;
    }

    int sereja = 0, dima = 0, turn = 1;
    for (int i = 0; i < n;) {
        if (turn % 2 == 1) {
            if (v[i] >= v[n-1]) {
                sereja += v[i];
                i++;
            } else {
                sereja += v[n-1];
                n--;
            }
        } else {
            if (v[i] >= v[n-1]) {
                dima += v[i];
                i++;
            } else {
                dima += v[n-1];
                n--;
            }
        }
        turn++;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}