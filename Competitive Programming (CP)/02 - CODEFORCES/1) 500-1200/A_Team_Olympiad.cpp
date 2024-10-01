#include <iostream>
#include <vector>
#define pb push_back
#define vi vector <int>
using namespace std;

int main() {
    int n; cin >> n;

    vi t(n);
    for (int &i : t) {
        cin >> i;
    }

    vi pro;
    vi math;
    vi pe;

    int min = 999999;
    for (int i = 0; i < n; i++) {
        if (t[i] == 1) pro.pb(i + 1);
        if (t[i] == 2) math.pb(i + 1);
        if (t[i] == 3) pe.pb(i + 1);
    }

    if (min > pro.size()) {
        min = pro.size();
    }
    if (min > math.size()) {
        min = math.size();
    }
    if (min > pe.size()) {
        min = pe.size();
    }

    cout << min << endl;
    for (int i = 0; i < min; i++) {
        cout << pro[i] << " " << math[i] << " " << pe[i] << endl;
    }
}