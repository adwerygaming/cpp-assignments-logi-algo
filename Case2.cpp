#include <iostream>
using namespace std;

int main() {
    int kkm = 75;
    float grade;

    cout << "Masukkan Nilai Mahasiswa : ";
    cin >> grade;

    if (grade >= kkm) {
        cout << "Mahasiswa dinyatakan lulus." << endl;
    } else {
        cout << "Mahasiswa dinyatakan tidak lulus." << endl;
    }

    return 0;
}