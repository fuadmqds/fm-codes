#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
     
    unordered_map<string, int> hz;

    while (n--) {
        string s; 
        cin >> s;

        hz[s]++;

        if (hz[s] == 1) {
            cout << "OK" << endl;
        } else {
            cout << s + to_string(hz[s] - 1) << endl;
        }
    }
    return 0;
}