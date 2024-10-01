#include <iostream>
using namespace std;
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        string b;
        cin >> b;
 
        int lb = b.length();
        for (int i = lb-3; i >= 0; i -= 2) {
            b.erase(i, 1);
        }
 
        cout << b << endl;
    }
}

// Editorial Solution
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int test = 1; test <= t; test++) {
		string b;
		cin >> b;

		string a = b.substr(0, 2);

		for (int i = 3; i < b.size(); i += 2) {
			a += b[i];
		}

		cout << a << endl;
	}

	return 0;
}
*/