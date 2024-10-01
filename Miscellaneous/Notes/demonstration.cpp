#include <bits/stdc++.h>
using namespace std;

void d1() {
    // std::vector
    // https://www.geeksforgeeks.org/vector-in-cpp-stl/

    cout << "std::vector" << endl;

    vector<int> v1(5);
    for (int i : v1) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v2(5);
    for (int &i : v2) {
        cin >> i;
    }
    for (int i : v2) {
        cout << i << " ";
    }

    cout << "\n\n";
}

void d2() {
    // std::pair
    // https://www.geeksforgeeks.org/pair-in-cpp-stl/

    cout << "std::pair" << endl;

    pair<string, int> p1("Halo!", 1);
    auto p2 = make_pair("Selamat Pagi!", 4);

    pair<string, int> p3(p2);
    pair<string, int> p4;
    p4 = {"Konniciwa!", 3};
    p2.first = "Hello!";
    p2.second = 2;

    cout << p1.first << " " << p1.second << endl;;
    cout << get<0>(p2) << " " << get<1>(p2) << endl;

    swap(p3, p4);
    cout << p3.first << " " << p3.second << endl;
    cout << p4.first << " " << p4.second << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    d1();
    d2();
    return 0;
}
    