#include <cstdio>

int main() {
    int N, A, B, in[100];
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &in[i]);
    }
    A = in[0];
    B = in[0];
    for(int i = 1; i < N; i++) {
        //Memcari bil terbesar (A)
        if(in[i] > A) {
            A = in[i];
        }
        //Mencari bil terkecil (B)
        if(in[i] < B) {
            B = in[i];
        }   
    }
    printf("%d %d\n", A, B);
}