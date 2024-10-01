#include <iostream>
using namespace std;

int stage3(int x) {
    if (x < 3)
        return 0;
    else if (x == 3)
        return 5;
    else 
        return stage3(x-1) + 2;
}

int stage2(int x) {
    if (x < 2) 
        return 0;
    else if (x == 2) 
        return 4;
    else {
        return stage2(x-1) + stage3(x);
    }
}

int sequence(int x) {
    if (x == 1) 
        return 1;
    else 
        return sequence(x-1) + stage2(x);
}

int main() {
    int n;
    cin >> n;
  
    cout << sequence(n);

    return 0;
}