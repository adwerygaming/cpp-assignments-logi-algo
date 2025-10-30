#include <iostream>
using namespace std;

// Membuat Fungsi Memberikan Nilai Kepada Mahasiswa
// Dengan Nama Mata Kuliah, NPM dan Nilai.

int GradeStudentAssignment(string assignment, string student_npm, float grade) {
    if (assignment.empty() || student_npm.empty() || grade < 0) {
        cout << "Mohon untuk mencantumkan informasi assignment, student_npm dan grade. Semua harus lengkap." << endl;
        return 0;
    }

    cout << "Memberikan nilai " << grade << " pada mahasiswa dengan NPM " << student_npm << " di tugas " << assignment << endl;
    return 0;
}

int main() {
    // Deklarasi Variabel
    const string assignment = "Logika & Algoritma";
    const string student_npm = "25.12.3654";
    const float grade = 100;

    // Menjalankan Fungsi
    GradeStudentAssignment(assignment, student_npm, grade);
    return 0;
}

// Kenapa menggunakan fungsi, dan tidak langsung di main?

// Karena, jika memberikan nilai kepada 100 mahasiswa, kita harus meng-copy paste
// 3 variabel dan 9 baris kode. Jika di total, akan menghasilkan 1,200 baris kode.
// Salah satu fitur menggunakan fungsi adalah, jika ada perbaruan dalam memberikan nilai
// kita tidak perlu untuk mengubah satu per satu untuk 100 mahasiswa. (effisien)