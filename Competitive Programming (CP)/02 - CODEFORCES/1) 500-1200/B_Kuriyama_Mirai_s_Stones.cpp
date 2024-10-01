#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+5;

int n, m, l, r, type;
long long V[MAX], PrefixV[MAX], PrefixU[MAX];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> V[i];
    }
    for (int i = 1; i <= n; i++) {
        PrefixV[i] = PrefixV[i-1] + V[i];
    }
    sort(V + 1, V + n + 1);
    for (int i = 1; i <= n; i++) {
        PrefixU[i] = PrefixU[i-1] + V[i];
    }
    cin >> m;
    while (m--) {
        cin >> type >> l >> r;
        if (type == 1) {
            cout << PrefixV[r] - PrefixV[l-1] << endl;
        } else {
            cout << PrefixU[r] - PrefixU[l-1] << endl;
        }
    }
    return 0;
}

/*
// Credit: AMnu
#include <bits/stdc++.h>
using namespace std;

const int MAXN=1e5+5;

int N, M, T, L, R;
long long V[MAXN], PV[MAXN], PU[MAXN];

int main() {
    cin>>N;
    for (int i=1;i<=N;i++) {
        cin>>V[i];
        PV[i] = PV[i-1]+V[i];
    }
    sort(V+1,V+N+1);
    for (int i=1;i<=N;i++) {
        PU[i] = PU[i-1]+V[i];
    }
    cin>>M;
    for (int i=1;i<=M;i++) {
        cin>>T>>L>>R;
        if (T==1) {
            cout<<PV[R]-PV[L-1]<<endl;
        }
        else {
            cout<<PU[R]-PU[L-1]<<endl;
        }
    }
}
*/