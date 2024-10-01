#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int math;
    int science;
    int bahasa;
    int english;    
};

int main() {
    int n, find;
    string findStudent[101];

    cin >> n;

    Student students[101];

    for (int i=0; i<n; i++) {
        cin >> students[i].name;
        cin >> students[i].math;
        cin >> students[i].science;
        cin >> students[i].bahasa;
        cin >> students[i].english;
    }
    
    cin >> find;

    for (int i=0; i<find; i++) {
        cin >> findStudent[i];
    }
    
    for (int i=0; i<find; i++) {

        bool found = false;
        for (int j=0; j<n; j++) {
            if (students[j].name == findStudent[i]) {
                found = true;
                cout << "Nilai " << students[j].name << endl;
                cout << "Matematika : " << students[j].math << endl;
                cout << "IPA : " << students[j].science << endl;
                cout << "Bahasa Indonesia : " << students[j].bahasa << endl;
                cout << "Bahasa Inggris : " << students[j].english << endl;
            }
        }
        if (!found) {
            cout << "Nilai " << findStudent[i] << " tidak ditemukan" << endl;
        }
    }
    return 0;
}