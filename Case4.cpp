#include <iostream>
using namespace std;

int main() {
    int batLvl = 100;
    // Map battery level to a category and use switch-case for decisions.
    // Category mapping:
    // 0 -> <= 10 (critical)
    // 1 -> 11..30 (watch out)
    // 2 -> 31..50 (suggestion)
    // 3 -> > 50 (ok)
    enum kondisi;
    if (batLvl <= 10) kondisi = 0;
    else if (batLvl <= 30) kondisi = 1;
    else if (batLvl <= 50) kondisi = 2;
    else kondisi = 3;

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