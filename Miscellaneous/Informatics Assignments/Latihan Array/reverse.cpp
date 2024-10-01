#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    
    cout << "Masukkan jumlah bilangan (N): ";
    cin >> N;

    vector<int> bilangan(N);

    cout << "Masukkan " << N << " bilangan: ";
    for (int i = 0; i < N; i++) {
        cin >> bilangan[i];
    }

    cout << "Bilangan dalam urutan terbalik: ";
    for (int i = N - 1; i >= 0; i--) {
        cout << bilangan[i] << " ";
    }

    cout << endl;

    return 0;
}