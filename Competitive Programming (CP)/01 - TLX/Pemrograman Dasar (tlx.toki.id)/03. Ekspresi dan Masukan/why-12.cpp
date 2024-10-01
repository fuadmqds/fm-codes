#include <cstdio>

int main() {
  int b1, b2, jml;

  b1 = 2000000000;
  b2 = 2000000000;

  jml = (b1 + b2) % 123;
  printf("%d\n", jml);
}