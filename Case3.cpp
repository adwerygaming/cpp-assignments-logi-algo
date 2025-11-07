#include <iostream>
using namespace std;

int main() {
    float grade; // Deklarasi Variabel

    cout << "Masukkan Nilai Mahasiswa : "; // Mengambil Input dari User
    cin >> grade;

    // Logika Jika grade berada dalam rentang tertentu, berikan predikat nilai
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