#include <iostream>
using namespace std;

int main() {
    string assignment, student_npm; // Deklarasi Variabel  
    float grade;

    cout << "Masukkan Nama Matkul : "; // Mengambil Input dari User
    getline(cin, assignment);
    cout << "Masukkan NPM Mahasiswa : "; 
    getline(cin, student_npm);
    cout << "Masukkan Nilai : "; 
    cin >> grade;

    // Logika Validasi Input
    if (assignment.empty() || student_npm.empty() || grade < 0) { 
        cout << "Mohon untuk mencantumkan informasi assignment, student_npm dan grade. Semua harus lengkap." << endl;
        return 0;
    }

    // Jika semua input valid, tampilkan pesan pemberian nilai
    cout << "Memberikan nilai " << grade << " pada mahasiswa dengan NPM " << student_npm << " di tugas " << assignment << endl;
    return 0;
}