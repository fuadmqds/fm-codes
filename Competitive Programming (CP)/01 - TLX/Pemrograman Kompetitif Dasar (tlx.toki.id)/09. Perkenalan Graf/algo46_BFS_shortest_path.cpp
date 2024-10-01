// BFS Shortest Path
// Time Complexity: O(V^2)

/*
Contoh Soal 9.1: Perjalanan Tersingkat
Di suatu provinsi, terdapat N buah kota. Kota-kota dinomori dari 1 sampai dengan N.
Terdapat E ruas jalan yang masing-masing menghubungkan dua kota berbeda.
Pak Dengklek tinggal di kota A. Suatu hari, beliau ingin pergi ke kota B. Karena sudah
tua, Pak Dengklek ingin melewati sesedikit mungkin ruas jalan untuk sampai ke kota
B. Tentukan berapa banyak ruas jalan tersedikit yang perlu beliau lewati untuk pergi
dari kota A ke kota B!
*/

#include <bits/stdc++.h>
using namespace std;

int V, E;
vector<int> adj[1001]; // Adjacency List

// Mencari rute terpendek dari node A ke node B
int shortestPath(int A, int B) {
    queue<int> q;
    int visitTime[V + 1];
    fill(visitTime, visitTime + V + 1, -1);

    q.push(A);
    visitTime[A] = 0;
    while (!q.empty()) {
        int curNode = q.front();
        q.pop();
        for (int adjNode : adj[curNode]) {
            if (visitTime[adjNode] == -1) {
                q.push(adjNode);
                visitTime[adjNode] = visitTime[curNode] + 1;
            }
        }
    }
    return visitTime[B];
}

int main() {
    int A, B;
    cin >> V >> E >> A >> B;

    for (int i = 0; i < E; ++i) {
        int u, v; // edge yang menghubungkan node u dan v
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << shortestPath(A, B) << '\n';
    return 0;
}

/*
Input 1
11 13 1 11
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
11 13 1 11
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