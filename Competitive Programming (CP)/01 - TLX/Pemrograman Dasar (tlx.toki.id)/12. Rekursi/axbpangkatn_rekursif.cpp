// Program untuk mencari a * b^n
#include <iostream>
using namespace std;

int abn(int i, int j, int k) {
  if (j == 0) {
    return k;
  } else {
    return abn(i, j - 1, k * i);
  }
}

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    cout << abn(a, b, n);
}