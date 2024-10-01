#include <iostream>
using namespace std;

int ways(int x, int y) {
    if (x == 0 || y == 0) {
        return 1;
    }
    else {
        return ways(x - 1, y) + ways(x, y - 1);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    cout << ways(n, m) << endl;
}