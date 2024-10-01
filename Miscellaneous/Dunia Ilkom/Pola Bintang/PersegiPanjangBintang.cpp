#include <iostream>
using namespace std;

int main() {
  int n, m;
  cout << "Masukkan lebar : ";
  cin >> n;
  cout << "Masukkan panjang : ";
  cin >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}