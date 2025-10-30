#include <iostream>
using namespace std;

// Membuat Fungsi Memberikan Nilai Kepada Mahasiswa
// Dengan Nama Mata Kuliah, NPM dan Nilai.

// 1 IF Statement

int main() {
    // Deklarasi Variabel
    string assignment = "Logika & Algoritma";
    string student_npm = "25.12.3654";
    float grade = 100;

    cout << "Masukkan Nama Matkul : "; 
    getline(cin, assignment);

    cout << "Masukkan NPM Mahasiswa : "; 
    getline(cin, student_npm);

    cout << "Masukkan Nilai : "; 
    cin >> grade;

    // Logika
    // Jika assignment kosong ATAU npm kosong ATAU nilai kurang dari 0 (-1 ke bawah)
    if (assignment.empty() || student_npm.empty() || grade < 0) {
        // Maka tolak
        cout << "Mohon untuk mencantumkan informasi assignment, student_npm dan grade. Semua harus lengkap." << endl;
        return 0;
    }

    // Jika tidak, lanjut memberikan nilai.
    cout << "Memberikan nilai " << grade << " pada mahasiswa dengan NPM " << student_npm << " di tugas " << assignment << endl;
    return 0;
}