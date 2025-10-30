#include <iostream>
using namespace std;

// Membuat Fungsi Memberikan Nilai Kepada Mahasiswa
// Dengan Nama Mata Kuliah, NPM Maha
int GradeStudentAssignment(string assignment, string student_npm, float grade) {
    if (assignment.empty() || student_npm.empty() || grade < 0) {
        cout << "Mohon untuk mencantumkan informasi assignment, student_npm dan grade. Semua harus lengkap." << endl;
        return 0;
    }

    cout << "Memberikan nilai " << grade << " pada mahasiswa dengan NPM " << student_npm << " di tugas " << assignment << endl;
    return 0;
}

int main() {
    const string assignment = "Logika & Algoritma";
    const string student_npm = "25.12.3654";
    const float grade = 100;

    GradeStudentAssignment(assignment, student_npm, grade);
    return 0;
}