#include <iostream>
using namespace std;

int main() {
    // membeli montor
    int opt;

    cout << "Dearah Motor" << endl;
    cout << "Silahkan pilih motor yang di inginkan." << endl;
    cout << "" << endl;
    cout << "[1] Honda" << endl;
    cout << "[2] Yamaha" << endl;
    cout << "[3] Suzuki" << endl;
    cout << "[4] Kawasaki" << endl;
    cout << "[5] Ducati" << endl;
    cout << "" << endl;

    cout << "Masukkan Pilihan: ";
    cin >> opt;

    switch (opt) {
    case 1:
        cout << "Berhasil membeli montor Honda." << endl;
        break;

    case 2:
        cout << "Berhasil membeli montor Yamaha." << endl;
        break;

    case 3:
        cout << "Berhasil membeli montor Suzuki." << endl;
        break;

    case 4:
        cout << "Berhasil membeli montor Kawasaki." << endl;
        break;

    case 5:
        cout << "Berhasil membeli montor Ducati." << endl;
        break;

    default:
        cout << "Pilihan tidak tersedia." << endl;
        break;
    }

    return 0;
}