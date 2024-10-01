// Program untuk membalik string dan
// Mencetak kembali string dari indeks ke idx
#include <iostream>
using namespace std;

string wolo(string s, int i) {
  if (s.size() == i) {
    return "";
  } else {
    return s[s.size()-i-1] + wolo(s, i+1);
  }
}

int main() {
    string str;
    int idx;
    cin >> str >> idx;
    cout << wolo(str, idx);
}