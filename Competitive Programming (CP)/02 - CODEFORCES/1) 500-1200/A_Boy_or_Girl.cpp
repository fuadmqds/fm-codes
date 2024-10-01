#include <iostream>
#include <set>
using namespace std;

int main() {
    string s; cin >> s;
    set<char> distinctCharacters;

    for (char c: s) {
        distinctCharacters.insert(c);
    }

    if (distinctCharacters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}