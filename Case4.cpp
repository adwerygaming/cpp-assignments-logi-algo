#include <iostream>
using namespace std;

int main() {
    int batLvl = 0;

    enum SemuaKondisiBaterai {
        KRITIS,
        AWAS,
        AMAN,
        PENUH
    };

    SemuaKondisiBaterai kondisi; 

    (batLvl <= 10) ? kondisi = KRITIS : (batLvl <= 30) ? kondisi = AWAS : (batLvl <= 50) ? kondisi = AMAN : kondisi = PENUH;

    if (batLvl <= 10) kondisi = KRITIS;
    else if (batLvl <= 30) kondisi = AWAS;
    else if (batLvl <= 50) kondisi = AMAN;
    else kondisi = PENUH;

    switch (kondisi) {
        case 0:
            // critical msg
            cout << "Baterai ada di level kritis, cepat segera mengisi daya!" << endl;
            break;
        case 1:
            // "watch out" type of msg
            cout << "Baterai akan segera habis, mohon untuk segera mengisi daya!" << endl;
            break;
        case 2:
            // suggestion type of msg
            cout << "Baterai setengah penuh. Tidak perlu khawatir." << endl;
            break;
        default:
            // ok
            cout << "Baterai masih dalam keadaan penuh." << endl;
            break;
    }

    return 0;
}