#include <iostream>
using namespace std;

/**
 * @brief Program Mesin Kopi Sederhana
 * 
 * @return int 
 */

int main() {
    int opt;

    cout << "Mesin Kopi" << endl;
    cout << "Silahkan pilih kopi yang di inginkan." << endl;
    cout << "" << endl;
    cout << "[1] Cappucino" << endl;
    cout << "[2] Amerikano" << endl;
    cout << "[3] Espresso" << endl;
    cout << "[4] Late" << endl;
    cout << "[5] Moccacino" << endl;
    cout << "" << endl;

    cout << "Masukkan Pilihan: ";
    cin >> opt;

    switch (opt) {
    case 1:
        cout << "Berhasil membeli Cappucino." << endl;
        break;
    
    case 2:
        cout << "Berhasil membeli Amerikano." << endl;
        break;
    case 3:
        cout << "Berhasil membeli Espresso." << endl;
        break;
    case 4:
        cout << "Berhasil membeli Late." << endl;
        break;
    case 5:
        cout << "Berhasil membeli Moccacino." << endl;
        break;

    default:
        cout << "Pilihan tidak tersedia." << endl;
        break;
    }
    
    return 0;
}