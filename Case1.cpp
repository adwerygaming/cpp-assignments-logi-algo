#include <iostream>
using namespace std;

/**
 * @brief Program Validasi Input dan Pemberian Nilai pada Mahasiswa
 * 
 * @return int 
 */

int main() {
    // Deklarasi Variabel
    string assignment;
    string student_npm;
    float grade;

    // Mengambil Input dari User
    cout << "Masukkan Nama Matkul : "; 
    getline(cin, assignment);

    cout << "Masukkan NPM Mahasiswa : "; 
    getline(cin, student_npm);

    cout << "Masukkan Nilai : "; 
    cin >> grade;

    // Logika Validasi Input
    if (assignment.empty() || student_npm.empty() || grade < 0) {
        // Jika ada input yang kosong atau nilai negatif, tampilkan pesan error
        cout << "Mohon untuk mencantumkan informasi assignment, student_npm dan grade. Semua harus lengkap." << endl;
        return 0;
    }

    // Jika semua input valid, tampilkan pesan pemberian nilai
    cout << "Memberikan nilai " << grade << " pada mahasiswa dengan NPM " << student_npm << " di tugas " << assignment << endl;
    return 0;
}