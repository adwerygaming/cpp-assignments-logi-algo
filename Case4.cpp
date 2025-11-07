#include <iostream>
using namespace std;

int main() {
    int opt; // Deklarasi Variabel

    cout << "Mesin Kopi" << endl; // Menampilkan Menu Pilihan Kopi
    cout << "Silahkan pilih kopi yang di inginkan.\n" << endl;
    cout << "[1] Cappucino" << endl;
    cout << "[2] Amerikano" << endl;
    cout << "[3] Espresso" << endl;

    cout << "\nMasukkan Pilihan: "; // Mengambil Input dari User
    cin >> opt;

    // Logika Pemilihan Kopi
    switch (opt) {
        case 1:
            cout << "Berhasil membeli Cappucino." << endl; break;
        case 2:
            cout << "Berhasil membeli Amerikano." << endl; break;
        case 3:
            cout << "Berhasil membeli Espresso." << endl; break;
        default:
            cout << "Pilihan tidak tersedia." << endl; break;
    }
    return 0;
}