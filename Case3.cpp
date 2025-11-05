#include <iostream>
using namespace std;

/**
 * @brief Program Penilaian Mahasiswa dari Nilai Angka ke Huruf
 * 
 * @return int 
 */

int main() {
    // Deklarasi Variabel
    float grade;

    // Mengambil Input dari User
    cout << "Masukkan Nilai Mahasiswa : ";
    cin >> grade;

    // Logika Pemberian Nilai Huruf berdasarkan Nilai Angka
    if (grade >= 91) {
        // Nilai A: 91-100
        cout << "Mahasiswa mendapatkan nilai A" << endl;
    } else if (grade >= 81) {
        // Nilai B: 81-90
        cout << "Mahasiswa mendapatkan nilai B" << endl;
    } else if (grade >= 61) {
        // Nilai C: 61-80
        cout << "Mahasiswa mendapatkan nilai C" << endl;
    } else if (grade >= 41) {
        // Nilai D: 41-60
        cout << "Mahasiswa mendapatkan nilai D" << endl;
    } else {
        // Nilai E: 0-40
        cout << "Mahasiswa mendapatkan nilai E" << endl;
    }

    return 0;
}