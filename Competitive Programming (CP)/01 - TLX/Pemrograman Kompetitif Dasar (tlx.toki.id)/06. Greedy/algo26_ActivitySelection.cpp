// Penyelesaian Activity Selection
// Time Complexity: O(N log N)

/*
Contoh Soal 6.1: Activity Selection
Anda diberikan N buah aktivitas. Aktivitas ke-i dinyatakan dalam {ai.start, ai.end}.
Artinya, aktivitas ini dimulai pada waktu ai.start dan berakhir pada waktu ai.end.
Pada setiap satuan waktu, Anda dapat mengikuti paling banyak satu aktivitas. Dengan kata lain,
Anda dapat mengikuti dua aktivitas i dan j jika ai.end ≤ aj.start atau aj .end ≤ ai.start. 
Anda ingin mengatur jadwal sedemikian sehingga Anda bisa mengikuti aktivitas sebanyak mungkin.

Contoh
Aktivitas: [{1,3},{2,6},{5,7},{8,9}]
Solusi: Anda dapat hadir di 3 aktivitas berbeda yang tidak saling tumpang tindih,
yaitu {1,3}, {5,7}, dan {8,9}

Format Input
Sebuah bilagan bulat N, banyaknya aktivitas. N buah baris selanjutnya
berisi 2 pasang bilangan bulat: ai.start dan ai.end, interval aktivitas ke i
dimulai dan berakhir secara berurutan.

Format Output
Sebuah bilangan bulat x, banyak aktivitas yang dapat dikerjakan tanpa tumpang tindih.
x baris berikutnya berisi dua pasang bilangan bulat yang menunjukkan interval
aktivitas secara berurutan.

Input
8
1 7
2 6
5 7
6 9
9 12
10 12
11 15
13 14

Output
4
2 6
6 9
9 12
13 14

Batasan
1 <= N <= 100
1 <= a.start <= a.end <= 100
*/

#include <bits/stdc++.h>
using namespace std;

vector <pair<int, int>> a; // a.start, a.end
vector <pair<int, int>> ans;

void sortByEndTime(int N) {
    // From stackoverflow :3 https://stackoverflow.com/questions/279854/how-do-i-sort-a-vector-of-pairs-based-on-the-second-element-of-the-pair
    sort(a.begin(), a.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });
}

int solveActivitySelection(int N) {
    sortByEndTime(N);
    int count = 0;
    int startTime = 0;
    for (int i = 0; i < N; ++i) {
        if (a[i].first >= startTime) {
            count++;
            ans.push_back(a[i]);
            startTime = a[i].second; // a[i].end
        }
    }
    return count;
}

int main() {
    int N, x, y;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }

    cout << solveActivitySelection(N) << '\n';
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i].first << ' ' << ans[i].second << '\n';
    }
    return 0;
}