#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  if (n % 2 == 0) {
    cout << n / 2 << endl;
  } else {
    cout << -((n+1) / 2) << endl;
  }
  return 0;
}

// Another Solutions
/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    long long n;
    cin >> n;

    if (n & 1) cout << "-";
    cout << (n+1) / 2 << endl;
    return 0;
}
// FM
*/

/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    long long n;
    cin >> n;

    if (n & 1) cout << (n / 2) - n;
    else cout << n / 2;
    return 0;
}
// FM
*/