#include <iostream>
using namespace std;
 
int main()
{
    int n; cin >> n;
    
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0) {
        cout << "YES" << endl;
        return 0;
    }
    int len = 0, count = 0;
    while (n) {
        if (n % 10 == 4 || n % 10 == 7) {
            count++;
        }
        len++;
        n /= 10;
    }
    if (count == len) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}