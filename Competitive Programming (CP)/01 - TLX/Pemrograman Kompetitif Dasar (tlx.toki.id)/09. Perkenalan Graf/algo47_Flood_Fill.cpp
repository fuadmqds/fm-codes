// Flood Fill Algorithm
// Time Complexity: O(V^2)

/*
Contoh Soal 9.2: Persebaran Informasi
Bebek-bebek Pak Dengklek merupakan hewan sosial. Apabila seekor bebek mengetahui 
suatu informasi, dia akan langsung memberitahu seluruh teman-temannya. Diketahui 
terdapat N ekor bebek di peternakan Pak Dengklek, yang dinomori dari 1 sampai dengan N.

Pak Dengklek mengetahui M hubungan pertemanan di antara bebek-bebeknya.
Masing-masing hubungan ini dinyatakan dengan ai dan bi, yang artinya bebek ai
berteman dengan bebek bi. Tentu saja, pertemanan ini berlaku secara dua arah.

Kini Pak Dengklek memiliki sebuah informasi yang ingin ia sampaikan kepada seluruh bebeknya. 
Berapa banyak bebek paling sedikit yang Pak Dengklek perlu beritahu tentang informasi ini, 
sedemikian sehingga seluruh bebek pada akhirnya akan mengetahui informasi tersebut?
*/

#include <bits/stdc++.h>
using namespace std;

int V, E;
bool visited[1001];
vector<int> adj[1001]; // Adjacency List

// Flood Fill
void DFS(int curNode) {
    visited[curNode] = true;
    for (int adjNode : adj[curNode]) {
        if (!visited[adjNode]) {
            DFS(adjNode);
        }
    }
}

int solve() {
    int result = 0;
    for (int i = 1; i <= V; ++i) {
        if (!visited[i]) {
            DFS(i);
            result += 1;
        }
    }
    return result;
}

int main() {
    cin >> V >> E;

    for (int i = 0; i < E; ++i) {
        int u, v; // edge yang menghubungkan node u dan v
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << solve() << '\n';
    return 0;
}

/*
Input
11 12
1 6
1 7
1 10
1 11
2 3
2 4
3 4
4 5
7 8
7 9
9 10
10 11
*/