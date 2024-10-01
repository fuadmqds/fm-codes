#include <iostream>
using namespace std;

int add(int a, int b, int *c) {
    *c = a + b;
    return *c;
}

int main(){
    int a = 1;
    int b = 2;
    int c;
    
    add(a, b, &c);
    cout << c;
}