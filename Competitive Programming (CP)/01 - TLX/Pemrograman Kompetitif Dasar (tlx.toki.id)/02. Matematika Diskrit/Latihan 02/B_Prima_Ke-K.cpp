#include <iostream>
#include <cstring>
using namespace std;

int primeList[100001];
int p = 1;

void SieveOfEratosthenes(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int i = 2; i*i <= n; i++) {
        if(prime[i]) {
            int j = i*i;
            while (j <= n) {
                prime[j] = false;
                j += i;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            primeList[p] = i;
            p++;
        }
    }
}

int main() {
    SieveOfEratosthenes(1000005);
    int t; cin >> t;

    int k[t];
    for (int i = 0; i < t; i++) {
        cin >> k[i];
    }
    for (int i = 0; i < t; i++) {
        cout << primeList[k[i]] << endl;;
    }
    return 0;
}

/*
//Credit: David Liman
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool eliminated[1000005];
ll primes[77780];

int main(){
	ll T;
	scanf("%lld", &T);

    ll total_primes = 0;
    ll biggest_prime = 1;

    for (ll i = 0; i < T; i++){
        ll K;
        scanf("%lld", &K);

        if (primes[K-1] != 0){
            printf("%lld\n", primes[K-1]);
        }
        else{
            ll j = 2;
            while (total_primes < K){
                if (!eliminated[j]){
                    primes[total_primes] = j;
                    total_primes++;

                    eliminated[j] = true;

                    for (ll k = j * j; k <= 1000005; k += j){
                        eliminated[k] = true;
                    }
                }
                j++;
            }
            printf("%lld\n", primes[K-1]);
        }
     }
}
*/