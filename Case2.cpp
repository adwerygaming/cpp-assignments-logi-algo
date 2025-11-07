#include <iostream>
using namespace std;

int main() {
    const int passingGrade = 75; // Deklarasi Variabel
    float grade;

    // Mengambil Input dari User
    cout << "Masukkan Nilai Mahasiswa : "; 
    cin >> grade;

    // Logika, jika nilai lebih atau sama dengan variabel passingGrade maka lulus,
    if (grade >= passingGrade) {
        cout << "Mahasiswa dinyatakan lulus." << endl;
    } else { 
        cout << "Mahasiswa dinyatakan tidak lulus." << endl;
    }
    return 0;
}