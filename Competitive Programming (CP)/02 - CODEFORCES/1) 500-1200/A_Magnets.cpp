    #include <iostream>
    using namespace std;

    int main() {
        int n; cin >> n;
        int count = 0;

        char temp;
        while (n--) {
            string s; cin >> s;

            if (s[0] == temp) {
                count++;
            }
            temp = s[1];
        }
        cout << count+1 << endl;
        return 0;
    }