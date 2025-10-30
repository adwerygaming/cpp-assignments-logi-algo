#include <iostream>
using namespace std;

int main() {
    const int passingGrade = 75;
    float grade;

    cout << "Masukkan Nilai Mahasiswa : ";
    cin >> grade;

    if (grade >= passingGrade) {
        cout << "Mahasiswa dinyatakan lulus." << endl;
    } else {
        cout << "Mahasiswa dinyatakan tidak lulus." << endl;
    }

    return 0;
}