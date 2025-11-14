#include <iostream>
using namespace std;

enum OpsiUsia {
    ANAK_ANAK = 1,
    DEWASA = 2,
    LANSIA = 3
};

// Forward declarations
void Menu();
void SelectUsia(int opt, OpsiUsia usia, string usiaStr, int price);
void ConfirmPurchase(int price, string usiaStr, int quantity);
void CreatePurchase(int price, string usiaStr);

void Menu() {
    int opt;
    int price;

    OpsiUsia usia;
    string usiaStr;

    cout << "Mesin tiket wisata" << endl;
    cout << "Silahkah pilih menu dibawah ini." << endl;
    cout << "" << endl;
    cout << "[1] Anak-Anak  | Rp25.000" << endl;
    cout << "[2] Dewasa     | Rp50.000" << endl;
    cout << "[3] Lansia     | Rp33.000" << endl;
    cout << "" << endl;

    cout << "Pilih Opsi >> ";
    cin >> opt;

    SelectUsia(opt, usia, usiaStr, price);

    return;
}

void CreatePurchase(int price, string usiaStr) {
    cout << "Pembelian Tiket " << usiaStr << " Berhasil. Silahkan ambil tiket di printer bawah ini." << endl;
    cout << endl;
    Menu();  // Return to menu after successful purchase
}

void ConfirmPurchase(int price, string usiaStr, int quantity) {
    char confirm;

    cout << "Konfirmasi pembelikan " << quantity << "x tiket untuk " << usiaStr << " seharga " << price << endl;
    cout << "Lanjut Beli? [Y/N] >> ";
    cin >> confirm;

    switch (confirm) {
        case 'Y':
        case 'y': {
            CreatePurchase(price, usiaStr);
            break;
        }
        default: {
            cout << "Pembelian Dibatalkan." << endl;
            cout << endl;
            Menu();  // Return to menu after cancellation
            break;
        }
    }

    return;
}

void SelectUsia(int opt, OpsiUsia usia, string usiaStr, int price) {
    int quantity = 1;

    switch (opt) {
        case (1): {
            price = 25000;
            usia = ANAK_ANAK;
            usiaStr = "ANAK-ANAK";
            break;
        };
        case (2): {    
            price = 50000;
            usia = DEWASA;
            usiaStr = "DEWASA";
            break;
        };
        case (3): {
            price = 33000;
            usia = LANSIA;
            usiaStr = "LANSIA";
            break;
        };
        default: {
            cout << "Maaf, opsi tidak tersedia. Silahkan coba lagi.";
            return;
        }
    }

    cout << "Masukkan jumlah tiket yang ingin dibeli (skip untuk 1 org) >> ";
    cin >> quantity;

    price = price * quantity;

    ConfirmPurchase(price, usiaStr, quantity);
    return;
}

int main() {
    Menu();
    return 0;
}