#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, m, temp = 0;
    cin >> n;

    vc<int> a(n);
    for (int &i : a) {
        cin >> i;
        i += temp;
        temp = i;
    }

    cin >> m;
    vc<int> q(m);
    for (int &j : q) {
        cin >> j;
        cout << lower_bound(a.begin(), a.end(), j) - a.begin() + 1 << endl;
    }
    return 0;
}
// FM


/*
// submission by tourist: https://codeforces.com/profile/tourist
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
 
using namespace std;
 
int b[2000010];
 
int main() {
  int n;
  scanf("%d", &n);
  int m = 0;
  for (int i = 0; i < n; i++) {
    int foo;
    scanf("%d", &foo);
    for (int j = 0; j < foo; j++) {
      b[++m] = i + 1;
    }
  }
  int tt;
  scanf("%d", &tt);
  while (tt--) {
    int foo;
    scanf("%d", &foo);
    printf("%d\n", b[foo]);
  }
  return 0;
}
*/