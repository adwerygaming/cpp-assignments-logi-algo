#include <iostream>
using namespace std;

/**
 * @brief Program Penilaian Mahasiswa dari Nilai Angka ke Huruf
 * 
 * @return int 
 */

int main() {
    float grade;

    cout << "Masukkan Nilai Mahasiswa : ";
    cin >> grade;

    if (grade >= 91) {
        cout << "Mahasiswa mendapatkan nilai A" << endl;
    } else if (grade >= 81) {
        cout << "Mahasiswa mendapatkan nilai B" << endl;
    } else if (grade >= 61) {
        cout << "Mahasiswa mendapatkan nilai C" << endl;
    } else if (grade >= 41) {
        cout << "Mahasiswa mendapatkan nilai D" << endl;
    } else {
        cout << "Mahasiswa mendapatkan nilai E" << endl;
    }

    return 0;
}