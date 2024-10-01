#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;

    vector <int> v;
    while (n--) {
        int a; cin >> a;
        v.push_back(a);
    }   

    int max = v[0], min = v[0], amazing = 0;
    for (int i : v) {
        if (i > max) {
            max = i;
            amazing++;
        } else if (i < min) {
            min = i;
            amazing++;
        }
    }
    
    cout << amazing << endl;
    return 0;
}