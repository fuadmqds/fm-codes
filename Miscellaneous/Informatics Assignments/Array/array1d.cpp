/*Larik satu dimensi dengan vektor*/

#include <stdio.h>
#include <vector>
using namespace std;

void cetakLarik(int ukuran, vector<int> larik) {
    int i;
    for (i = 0; i < ukuran; i++)
        printf("%d\n", larik[i]);
}

int main() {
    vector<int> bilangan;
    int i;
     for (i = 0; i < 5; i++)
        bilangan.push_back(i);
    cetakLarik(5, bilangan);
    return 0; 
}