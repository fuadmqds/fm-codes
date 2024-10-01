#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;    
    char group;
    int workHour, salary;

    cout << "Nama Karyawan: "; 
    getline(cin, name);
    cout << "Golongan: ";
    cin >> group;
    cout << "Jam kerja: ";
    cin >> workHour;

    if (group == 'A') {
        salary = workHour * 5000;
    } else if (group == 'B') {
        salary = workHour * 7000;
    } else if (group == 'C') {
        salary = workHour * 8000;
    } else if (group == 'D') {
        salary = workHour * 10000;
    } else {
        cout << "Golongan tidak ditemukan";
        return 0;
    }

    if (workHour > 48) {
        salary += (workHour - 48) * 4000;
    }

    cout << name << " Menerima Upah Rp." << salary << " Per minggu" << endl;

    return 0;
}