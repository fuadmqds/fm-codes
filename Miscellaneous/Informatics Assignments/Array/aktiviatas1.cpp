#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myvector {5, 4, 3, 2, 1};
    myvector.pop_back();

    for (auto it = myvector.begin(); it != myvector.end(); ++it) {
        cout << ' ' << *it;
    } 
}

/*Mencetak elemen vector hingga sebelum elemen terakhir*/