#include <iostream>
#include <string>
using namespace std;

string drawMountains(int x) {
    if (x == 1) {
        return "*\n";
    } else {
        string top = "";
        for (int i = 0; i < x; i++) {
            top += "*";
        }
        return drawMountains(x - 1) + top + "\n" + drawMountains(x - 1);
    }
}

int main() {
    int N;
    cin >> N;

    cout << drawMountains(N);
    return 0;
}