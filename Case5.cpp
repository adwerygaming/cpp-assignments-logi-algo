#include <iostream>
using namespace std;

/**
 * @brief Program ATM Sederhana
 * 
 * @return int 
 */

int main() {
    int opt;

    cout << "ATM Bank XYZ" << endl;
    cout << "Silahkan pilih layanan yang di inginkan." << endl;
    cout << "" << endl;
    cout << "[1] Cek Saldo" << endl;
    cout << "[2] Tarik Tunai" << endl;
    cout << "[3] Setor Tunai" << endl;
    cout << "[4] Transfer" << endl;
    cout << "" << endl;

    int saldo = 10000000;

    cout << "Masukkan Pilihan: ";
    cin >> opt;

    switch (opt) {
    case 1: {
        cout << "Saldo Anda adalah: Rp. " << saldo << endl;
        break;
    }

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

    case 3: {
        int setor;

        cout << "Masukkan jumlah setor tunai: ";
        cin >> setor;

        cout << "Berhasil setor tunai: Rp. " << setor << endl;
        cout << "Saldo Anda sekarang adalah: Rp. " << saldo + setor << endl;
        break;
    }

    case 4: {
        string rekening;
        int transfer;

        cout << "Masukkan nomor rekening tujuan: ";
        cin >> rekening;

        cout << "Masukkan jumlah transfer: ";
        cin >> transfer;

        if (transfer > saldo) {
            cout << "Saldo tidak cukup untuk mentransfer Rp. " << transfer << endl;
        } else {
            saldo -= transfer;
            cout << "Berhasil mentransfer Rp. " << transfer << " ke rekening " << rekening << endl;
        }

        break;
    }

    default:
        cout << "Pilihan tidak tersedia." << endl; 
        break;
    }

    return 0;
}