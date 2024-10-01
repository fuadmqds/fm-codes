#include <cstdio>
#include <string>

using namespace std;

char buff[100];

int main() {
    scanf("%[^\n]%*c", buff);

    string s = buff;
    printf("%s\n", s.c_str());
}