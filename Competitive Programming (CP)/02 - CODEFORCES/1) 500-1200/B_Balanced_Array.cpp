#include <iostream>
#include <vector>
#define vi vector <int>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        int m = n / 2;
        if (m % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }

        vi a1(m);
        vi a2(m);

        int add1 = 2;
        for (int &a : a1) {
            a = add1;
            add1 += 2;
        }

        int add2 = 1;
        int idx = 1;
        for (int &j : a2) {
            if (idx == m) j = add2 + m;
            else j = add2;
            add2 += 2;
            idx++;
        }

        cout << "YES" << endl;
        for (int i : a1) {
            cout << i << " ";
        }

        for (int j : a2) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// Editorial Solution
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		n /= 2;
		if (n & 1) {
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		for (int i = 1; i <= n; ++i) {
			cout << i * 2 << " ";
		}
		for (int i = 1; i < n; ++i) {
			cout << i * 2 - 1 << " ";
		}
		cout << 3 * n - 1 << endl;
	}
	
	return 0;
}
*/