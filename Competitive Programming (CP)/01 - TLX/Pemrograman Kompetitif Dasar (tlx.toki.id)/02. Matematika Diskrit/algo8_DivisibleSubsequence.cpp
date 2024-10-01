#include <iostream>
#include <vector>
using namespace std;

vector<int> findDivisibleSubsequence(int A[], int N) {
    int sum[N+1];
    sum[0] = 0;
    for (int i = 1; i <= N; i++) {
        sum[i] = (sum[i-1] + A[i]);
    } 

    vector<int> ret;
    vector<int> seenInIndex(N, -1);

    for (int i = 0; i <= N; i++) {
        if (seenInIndex[sum[i] % N] == -1) {
            seenInIndex[sum[i] % N] = i;
        } else {
            int a = seenInIndex[sum[i] % N];
            int b = i;

            for (int j = a+1; j <= b; j++) {
                ret.push_back(A[j]);
            }
            return ret;
        }
    }
    return ret;
}

int main() {
    int n;
    cin >> n;
    
    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<int> result = findDivisibleSubsequence(arr, n);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;   
}