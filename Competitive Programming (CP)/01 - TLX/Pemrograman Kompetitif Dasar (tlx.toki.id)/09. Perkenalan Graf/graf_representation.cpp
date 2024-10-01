// Cara Merepresentasikan Graf pada Pemrograman
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; // n = nodes, m = edges
    cin >> n >> m;
    int u, v; // edge yang menghubungkan node u dengan node v

    // Representasi Graf dengan Adjacency List
    // Metode Menyimpan Edges dengan Adjacency List
    vector<int> adj[n + 1]; 
    for (int i = 0; i < m; ++i) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; ++i) {
        cout << "Node yang adjacent dengan node " << i << " adalah: ";
        for (int j = 0; j < adj[i].size(); ++j) {
            cout << adj[i][j] << ' ';
        }
        cout << '\n';
    }

    // Representasi Graf dengan Edge List
    // Metode Menyimpan Edges dengan Edge List
    vector<pair<int, int>> edge_list;
    for (int i = 0; i < m; ++i) {
        cin >> u >> v;
        edge_list.push_back(make_pair(u, v));
    }

    for (int i = 0; i < m; ++i) {
        cout << edge_list[i].first << ' '  << edge_list[i].second << '\n';
    }

    // Representasi Graf dengan Adjacency Matrix
    // Metode Menyimpan Edges dengan Adjacency Matrix
    int adj_matrix[n + 1][n + 1];
    memset(adj_matrix, 0, sizeof(adj_matrix));
    for (int i = 0; i < m; ++i) {
        cin >> u >> v;
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << adj[i][j] << ' ';
        }
        cout << '\n';
    }
}

/*
Contoh Input
5 4
1 3
3 5
5 4
4 2
*/


// Tabel Perbandingan Kompleksitas Representasi Graf
// Sumber: Buku Pemrograman Kompetitif Dasar
/*
-------------------| Adj.Matrix   Adj.List    Edge List
Tambah edge        |     O(1)        O(1)       O(1)
Hapus edge         |     O(1)        O(K)       O(E)
Cek keterhubungan  |     O(1)        O(K)       O(E)
Daftar tetangga    |     O(V)        O(K)       O(E)
Kebutuhan memori   |     O(V^2)      O(E)       O(E)
*/