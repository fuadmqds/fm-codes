// Algoritma Depth-First Search (DFS) Secara Iteratif
// Time Complexity: O(V^2) jika menggunakan Adjacency Matrix 
// Time Complexity: O(V + E) jika menggunakan Adjacency List 
// dengan V adalah banyak node/vertex dan E adalah banyak edge
#include <bits/stdc++.h>
using namespace std;

bool visited[1001];
vector<int> adj[1001]; // Adjacency List

void DFS(int initialNode) {
    stack<int> s;
    s.push(initialNode);
    visited[initialNode] = true;
    while (!s.empty()) { // True jika stack 's' kosong
        int curNode = s.top();
        s.pop();
        cout << "Mengunjungi Node: " << curNode << '\n';
        for (int adjNode = 0; adjNode < adj[curNode].size(); ++adjNode) {
            if (!visited[adj[curNode][adjNode]]) {
                s.push(adj[curNode][adjNode]);
                visited[adj[curNode][adjNode]] = true;
            }
        }
    }
}

int main() {
    int V, E; // banyak node/vertex, banyak edge
    cin >> V >> E;

    for (int i = 0; i < E; ++i) {
        int u, v; // edge yang menghubungkan node u dan v
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for (int i = 1; i <= V; ++i) {
    //     cout << "Node " << i << " adjacent dengan node: ";
    //     for (int j = 0; j < adj[i].size(); ++j) {
    //         cout << adj[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    memset(visited, false, sizeof(visited));
    DFS(1);
    return 0;
}

/*
Input 1
11 13
1 2
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

Input 2
11 13
1 5
5 11
5 2
11 2
2 10
1 7
1 3
3 6
3 8
1 4
4 8
4 9
1 9
*/