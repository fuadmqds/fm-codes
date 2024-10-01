#include <cstdio>

int main(){
    printf("%d\n", 'a' > 'A');
    printf("%d\n", 'a' < 'A');
    printf("%d\n", 'a' >= 'A');
    printf("%d\n", 'a'=='A');
    
    printf("%d\n", 'a' < 'aa');
    printf("%d\n", "abcd" > "abca");
    printf("%d\n", "abc" == "abc");
    printf("%d\n", "abc" <= "abc");
}