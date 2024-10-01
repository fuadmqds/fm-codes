#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int nUp = 0, nLow = 0;

    int ls = s.length();
    for (int i = 0; i < ls; i++) {
        if (s[i] < 'a') {
            nUp++;
        } else {
            nLow++;
        }
    }

    for (int i = 0; i < ls; i++) {
        if (nUp > nLow) {
            if (s[i] >= 'a') s[i] -= 'a' - 'A';
        } else {
            if (s[i] < 'a') s[i] += 'a' - 'A';
        }
    }
    cout << s << endl;
    return 0;
}

/*
// Modified by ChatGTP
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int nUp = 0, nLow = 0;
    int ls = s.length();

    for (int i = 0; i < ls; i++) {
        if (s[i] < 'a') {
            nUp++;
        } else {
            nLow++;
        }
    }

    char change = (nUp > nLow) ? ('A' - 'a') : ('a' - 'A');

    for (int i = 0; i < ls; i++) {
        if (nUp > nLow) {
            if (s[i] >= 'a') s[i] += change;
        } else {
            if (s[i] < 'a') s[i] += change;
        }
    }

    cout << s << endl;
    return 0;
}
*/