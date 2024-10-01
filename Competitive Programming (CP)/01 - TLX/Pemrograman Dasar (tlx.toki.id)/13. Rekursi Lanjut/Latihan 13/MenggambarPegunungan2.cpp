#include <iostream>
using namespace std;

void draw(int x) {
    if (x == 0) {
        return;
    } else {
        draw(x - 1);
        for (int i = 0; i < x; i++) {
            cout << "*";
        }
        cout << endl;
        draw(x - 1);
    }
}

int main() {
    int N;
    cin >> N;

    draw(N);
    return 0;
}