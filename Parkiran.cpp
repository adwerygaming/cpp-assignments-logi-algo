#include <iostream>
using namespace std;

enum Kendaraan {
    MOBIL = 1,
    MOTOR = 2,
    BUS = 3
};

void clearConsole() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    int optKendaraan;
    int optLamaParkir;

    int biayaParkir;
    string kendaraanDipilih;
    Kendaraan jenisKendaraan;
    
    cout << "Mesin Parkir Otomatis" << endl;
    cout << "" << endl;
    cout << "[1] Mobil" << endl;
    cout << "[2] Motor" << endl;
    cout << "[3] Bus" << endl;
    cout << "" << endl;

    cout << "Masukkan jenis kendaraan >> ";
    cin >> optKendaraan;

    switch (optKendaraan) {
        case (1):
            kendaraanDipilih = "Mobil";
            jenisKendaraan = MOBIL;
            break;
        case (2):
            kendaraanDipilih = "Motor";
            jenisKendaraan = MOTOR;
            break;
        case (3):
            kendaraanDipilih = "Bus";
            jenisKendaraan = BUS;
            break;
        default:
            cout << "Jenis kendaraan tidak tersedia." << endl;
            return 0;
    }

    clearConsole();

    cout << "Kendaraan Dipilih: " << kendaraanDipilih << endl;
    cout << "" << endl;

    cout << "Masukkan lama parkir (dalam jam) >> ";
    cin >> optLamaParkir;

    switch (jenisKendaraan) {
        case MOBIL:
            if (optLamaParkir >= 1 && optLamaParkir <= 2) {
                biayaParkir = 3000;
            } else if (optLamaParkir >= 3 && optLamaParkir <= 5) {
                biayaParkir = 5000;
            } else {
                biayaParkir = optLamaParkir * 8000;
            }
    
            break;
        case MOTOR:
            if (optLamaParkir >= 1 && optLamaParkir <= 2) {
                biayaParkir = 5000;
            } else if (optLamaParkir >= 3 && optLamaParkir <= 5) {
                biayaParkir = 10000;
            } else {
                biayaParkir = optLamaParkir * 15000;
            }
    
            break;
        case BUS:
            if (optLamaParkir >= 1 && optLamaParkir <= 2) {
                biayaParkir = 10000;
            } else if (optLamaParkir >= 3 && optLamaParkir <= 5) {
                biayaParkir = 20000;
            } else {
                biayaParkir = optLamaParkir * 30000;
            }
            break;
        default:
            cout << "Jenis kendaraan tidak tersedia." << endl;
            return 0;
    }

    clearConsole();


    cout << "----- Invoice Parkir -----" << endl;
    cout << "Kendaraan Dipilih  : " << kendaraanDipilih << endl;
    cout << "Lama Parkir        : " << optLamaParkir << " jam" << endl;
    cout << "Total Biaya        : Rp " << biayaParkir << endl;
    cout << "" << endl;
    cout << "Terima kasih telah menggunakan layanan parkir kami!" << endl;
    cout << "" << endl;

    return 0;
}