// Program untuk menampilkan bilangan prima <= N
// Time Complexity: O(N log(log N))
// Auxiliary Space: O(N)
#include <iostream>
#include <vector>
using namespace std;

vector<int> primeList;

void SieveOfEratosthenes(int N) {
    bool eliminated[N+1] = {false};
    for (int i = 2; i <= N; i++) {
        if(!eliminated[i]) {
            primeList.push_back(i);
            int j = i*i;
            while (j <= N) {
                eliminated[j] = true;
                j += i;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    SieveOfEratosthenes(N);
    
    for (int i : primeList) {
        cout << i << " ";
    }
    return 0;
}

/*
// Another Example
void SieveOfEratosthenes(int N) {
    bool prime[N+1];
    memset(prime, true, sizeof(prime));
    for (int i = 2; i*i <= N; i++) {
        if(prime[i]) {
            int j = i*i;
            while (j <= N) {
                prime[j] = false;
                j += i;
            }
        }
    }
    for (int i = 2; i <= N; i++) {
        if (prime[i]) {
            cout << i << " ";
        }
    }
}
*/