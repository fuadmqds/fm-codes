#include <cstdio>

int main() {
  int N;
  scanf("%d", &N);
  for (int i = N-1; i >= 0; i--) {
    for (int j = 0; j < N; j++) {
      if (j < i) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }
}