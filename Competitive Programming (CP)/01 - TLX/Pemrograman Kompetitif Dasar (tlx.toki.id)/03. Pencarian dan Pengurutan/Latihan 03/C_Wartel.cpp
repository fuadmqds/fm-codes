#include <bits/stdc++.h>
#define semoga_ac ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int n, q;
vector<pair<string, string>> v;

void solve(string find) {
    int ans = -1, l = 0, r = n - 1;
    while (l <= r && ans == -1) {
        int mid = (l + r) / 2;
        if (find < v[mid].first) {
            r = mid - 1;
        } else if (find > v[mid].first) {
            l = mid + 1;
        } else {
            ans = mid;
            break;
        }
    }

    if (ans == -1) {
        cout << "NIHIL" << endl;
    } else {
        cout << v[ans].second << endl;
    }
}

int main() {
    semoga_ac;
    cin >> n >> q;

    int i = n;
    while (i--) {
        string a, b;
        cin >> a >> b;
        
        v.push_back(make_pair(a, b));
    }

    while (q--) {
        string str;
        cin >> str;

        solve(str);
    }
    return 0;
}
// FM



// Another solution
/*
#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(N log N + Q log N)

int main() {
    int n, q;
    string name, num, find, telp;
    cin >> n >> q;

    map<string, string> user;
    while (n--) {
        cin >> name >> num;
        user[name] = num;
    }

    while (q--) {
        cin >> find;

        telp = user[find];
        if (telp == "") {
            cout << "NIHIL" << endl;
        } else {
            cout << telp << endl;
        }
    }
    return 0;
}
*/