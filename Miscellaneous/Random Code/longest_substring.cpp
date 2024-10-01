// Program to find the length of the longest substring wihtout repeating 

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s, int mid) {
    int cnt[256] = {0};
    int distinct = 0;
    for (int i = 0; i < s.size(); i++) {
        cnt[s[i]]++;
        if (cnt[s[i]] == 1) {
            distinct++;
        }
        if (i >= mid) {
            cnt[s[i - mid]]--;
            if (cnt[s[i - mid]] == 0) {
                distinct--;
            }
        }
        if (i >= mid - 1) {
            if (distinct == mid) {
                return true;
            }
        }
    }
    return false;
}

int longestUniqueSubstr(string s) {
    int ans, l = 1, r = s.size();
    while (l <= r) {
        int mid = (l + r) / 2;
        if (isValid(s, mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    string str;
    cin >> str;
    
    cout << longestUniqueSubstr(str) << endl;
    return 0;
}
// FM


/*
// Program to find the length of the longest substring with repeating characters

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;

    int max = -99999;
    int cur = 1;
    int ls = s.length();
    for (int i = 0; i < ls; i++) {
        if (s[i] == s[i+1]) {
            cur++;
            if (max < cur) {
                max = cur;
            }
        } else {
            cur = 1;
        }
    }
    cout << max << endl;
}
*/