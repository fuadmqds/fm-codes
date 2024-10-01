#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int diff = 0, same = 0;
    while (a > 0 && b > 0) {
        diff++;
        a--;
        b--;
    }

    if (a > 0) {
        same += a / 2;
    } else {
        same += b / 2;
    }
    
    cout << diff << " " << same << endl;
    return 0;
}