#include <iostream>
using namespace std;

/**
 * @brief Program Menentukan Kelulusan Mahasiswa Berdasarkan Nilai Mininum
 * 
 * @return int 
 */

int main() {
    // Deklarasi Variabel
    const int passingGrade = 75;
    float grade;

    // Mengambil Input dari User
    cout << "Masukkan Nilai Mahasiswa : ";
    cin >> grade;

    // Logika, jika nilai lebih atau sama dengan variabel passingGrade maka lulus,
    // selain itu tidak lulus
    if (grade >= passingGrade) {
        cout << "Mahasiswa dinyatakan lulus." << endl;
    } else {
        cout << "Mahasiswa dinyatakan tidak lulus." << endl;
    }

    return 0;
}