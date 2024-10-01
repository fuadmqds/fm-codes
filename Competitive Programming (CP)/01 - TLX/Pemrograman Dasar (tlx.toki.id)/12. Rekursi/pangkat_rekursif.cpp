// Program menghitung a^n menggunakan rekursi
#include <iostream>
using namespace std;

int power(int a, int b) {
  if (b == 0) {
    return 1;
  } else if (b % 2 == 1) {
    return a * power(a, b - 1);
  } else {
    int temp = power(a, b / 2);
    return temp * temp;
  }
}

int main() {
    int a, n;
    cin >> a >> n;
    cout << power(a, n);
}