#include <iostream>
using namespace std;

int main() {
    int nilaiPutra;
    char nilaiHuruf;

    cout << "Masukkan nilai mas putra >> ";
    cin >> nilaiPutra;

    if (nilaiPutra >= 90) {
        nilaiHuruf ='A';
    } else if (nilaiPutra >= 80) {
        nilaiHuruf = 'B';
    } else if (nilaiPutra >= 70) {
        nilaiHuruf = 'C';
    } else if (nilaiPutra >= 60) {
        nilaiHuruf = 'D';
    } else {
        nilaiHuruf = 'E';
    }

    cout << "Putra mendapatkan nilai " << nilaiHuruf << endl;
    return 0;
}