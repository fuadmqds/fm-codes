#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int n; string s;
vector<pair<string, int>> str;

void BubbleSort() {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (str[j].second > str[j+1].second) {
                swap(str[j], str[j+1]);
            }
            if (str[j].second == str[j+1].second && str[j].first > str[j+1].first) {
                swap(str[j], str[j+1]);
            }
        }
    }
}

void solve() {
    BubbleSort(); // Sorting the name according to the length

    for (int i = 0; i < n; i++) {
        cout << str[i].first << endl;
    }
}

int main() {
    Bismillah;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;

        str.push_back(make_pair(s, s.size()));
    }

    solve();
    return 0;
}
// FM


// Another solutions
/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

// Test
int main() {
    Bismillah;

    vector<pair<int, vector<string>>> v(10, {0, vector<string> (500)});
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int ls = s.size() - 1; // 0-based
        
        v[ls].first++;
        v[ls].second[v[ls].first - 1] = s;
    }

    for (int i = 0; i < 10; i++) {
        if (v[i].first != 0) {
            sort(v[i].second.begin(), v[i].second.begin() + v[i].first);
            for (int j = 0; j < v[i].first; j++) {
                cout << v[i].second[j] << endl;
            }
        }
    }
    return 0;
}
// FM
*/

/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

bool comp(string a, string b) {
    if (a.size() == b.size()) {
        return a < b;
    }
    return a.size() < b.size();
}

int main() {
    Bismillah;
    
    int n; cin >> n;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s, s + n, comp);

    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;
    }
    return 0;
}
*/