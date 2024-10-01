#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    int n, k = 0;
    cin >> n;
    vc<int> a(n);

    for (int& i : a) {
        cin >> i;
    }

    vc<pair<int, int>> p;
    for (int i = 0; i < n; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIdx]) {
                minIdx = j;
            }
        }
        swap(a[i], a[minIdx]);
        if (i != minIdx) {
            p.pb({ i, minIdx });
            k++;
        }
    }
    cout << k << endl;
    for (int i = 0; i < k; i++) {
        cout << p[i].fi << ' ' << p[i].se << endl;
    }
    return 0;
}
// FM



/*
// Written by Filip Hlasek 2014
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstring>
 
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define REP(i,b) for(int i=0;i<(b);i++)
 
using namespace std;
 
#define MAXN 3333
int a[MAXN];
 
int main(int argc, char *argv[]) {
  int N;
  scanf("%d", &N);
  REP(i, N) scanf("%d", a + i);
  printf("%d\n", N);
  REP(i, N) {
    int best = i;
    FOR(j, i, N - 1) if (a[j] < a[best]) best = j;
    printf("%d %d\n", i, best);
    swap(a[i], a[best]);
  }
  return 0;
}
*/