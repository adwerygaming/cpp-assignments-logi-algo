#include <iostream>
using namespace std;

int main() {
    // Deklarasi Variabel
    int tarik, opt, saldo = 10000000;
    
    // Menampilkan Menu Pilihan Layanan ATM
    cout << "ATM Bank XYZ" << endl;
    cout << "Silahkan pilih layanan yang di inginkan.\n" << endl;
    cout << "[1] Cek Saldo" << endl;
    cout << "[2] Tarik Tunai" << endl;

    cout << "\nMasukkan Pilihan: "; // Mengambil Input dari User
    cin >> opt;

    // Logika Pemilihan Layanan ATM
    switch (opt) {
        case 1: 
            cout << "Saldo Anda adalah: Rp. " << saldo << endl; break;
        case 2: {
            cout << "Masukkan jumlah tarik tunai: ";
            cin >> tarik;

            if (tarik > saldo) {
                cout << "Saldo tidak cukup untuk menarik tunai: Rp. " << tarik << endl;
            } else {
                saldo -= tarik;
                cout << "Berhasil menarik tunai: Rp. " << tarik << endl;
            } break;
        }
        default:
            cout << "Pilihan tidak tersedia." << endl; break;
    }
    return 0;
}