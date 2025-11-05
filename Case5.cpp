#include <iostream>
using namespace std;

/**
 * @brief Program ATM Sederhana
 * 
 * @return int 
 */

int main() {
    // Deklarasi Variabel
    int opt;
    int saldo = 10000000;

    // Menampilkan Menu Pilihan Layanan ATM
    cout << "ATM Bank XYZ" << endl;
    cout << "Silahkan pilih layanan yang di inginkan." << endl;
    cout << "" << endl;
    cout << "[1] Cek Saldo" << endl;
    cout << "[2] Tarik Tunai" << endl;
    cout << "" << endl;

    // Mengambil Input dari User
    cout << "Masukkan Pilihan: ";
    cin >> opt;

    // Logika Pemilihan Layanan ATM
    switch (opt) {
        // Jika 1, tampilkan saldo
        case 1: {
            cout << "Saldo Anda adalah: Rp. " << saldo << endl;
            break;
        }

        // Jika 2, proses tarik tunai
        case 2: {
            int tarik;
            cout << "Masukkan jumlah tarik tunai: ";
            cin >> tarik;

            if (tarik > saldo) {
                cout << "Saldo tidak cukup untuk menarik tunai: Rp. " << tarik << endl;
            } else {
                saldo -= tarik;
                cout << "Berhasil menarik tunai: Rp. " << tarik << endl;
            }

            break;
        }

        // Selain itu, tampilkan pesan pilihan tidak tersedia
        default:
            cout << "Pilihan tidak tersedia." << endl; 
            break;
    }

    return 0;
}