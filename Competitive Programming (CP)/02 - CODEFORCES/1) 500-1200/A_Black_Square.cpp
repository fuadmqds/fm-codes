#include <iostream>
using namespace std;

int main() {
    int a[5], calories = 0;
    for (int i = 1; i < 5; ++i) {
        cin >> a[i];
    }

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        int strip = static_cast<int>(s[i] - 48);
        calories += a[strip];
    }

    cout << calories << endl;
    return 0;
}