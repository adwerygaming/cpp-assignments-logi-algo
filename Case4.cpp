#include <iostream>
using namespace std;

/**
 * @brief Program Mesin Kopi Sederhana
 * 
 * @return int 
 */

int main() {
    // Deklarasi Variabel
    int opt;

    // Menampilkan Menu Pilihan Kopi
    cout << "Mesin Kopi" << endl;
    cout << "Silahkan pilih kopi yang di inginkan." << endl;
    cout << "" << endl;
    cout << "[1] Cappucino" << endl;
    cout << "[2] Amerikano" << endl;
    cout << "[3] Espresso" << endl;
    cout << "" << endl;

    // Mengambil Input dari User
    cout << "Masukkan Pilihan: ";
    cin >> opt;

    // Logika Pemilihan Kopi
    switch (opt) {
        // Jika 1, tampilkan pesan pembelian Cappucino
        case 1:
            cout << "Berhasil membeli Cappucino." << endl;
            break;
        // Jika 2, tampilkan pesan pembelian Amerikano  
        case 2:
            cout << "Berhasil membeli Amerikano." << endl;
            break;
        // Jika 3, tampilkan pesan pembelian Espresso
        case 3:
            cout << "Berhasil membeli Espresso." << endl;
            break;
        // Selain itu, tampilkan pesan pilihan tidak tersedia
        default:
            cout << "Pilihan tidak tersedia." << endl;
            break;
    }
    
    return 0;
}