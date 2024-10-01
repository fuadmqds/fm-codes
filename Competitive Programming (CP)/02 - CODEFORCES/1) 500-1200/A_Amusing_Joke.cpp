#include <iostream>
using namespace std;

int main() {
    string a, b, af;
    int alpha[26] = {0};
    int beta[26] = {0};
    cin >> a >> b >> af;

    string bf = a + b;
    int lbf = bf.length();
    int laf = af.length();

    for (int i = 0; i < lbf; i++) {
        bf[i] += 'a' - 'A';
        alpha[bf[i] - 'a']++;
    }

    for (int i = 0; i < laf; i++) {
        af[i] += 'a' - 'A';
        beta[af[i] - 'a']++;
    }

    bool ans = true;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] != beta[i]) {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}