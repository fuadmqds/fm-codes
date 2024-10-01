#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int n, idx;
string name;
vector<string> s;

int InsertionSort() {
    while (idx > 0) {
        if (s[idx] < s[idx-1]) {
            swap(s[idx], s[idx-1]);
        } else {
            return idx;
        }
        idx--;
    }
    return idx;
}

int main() {
    Bismillah;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name;
        s.push_back(name);

        idx = i;
        cout << InsertionSort() + 1 << endl;
    }
    return 0;
}
// FM



// Another solution
/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int n, idx;
string name;
vector<string> s;

int main() {
    Bismillah;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name;
        s.push_back(name);
        
        idx = i;
        for (int j = i; j >= 0; j--) {
            if (j > 0 && s[j] < s[j-1]) {
                swap(s[j], s[j-1]);
                idx--;
            }
        }
        cout << idx + 1 << endl;
    }
    return 0;
}
// FM
*/