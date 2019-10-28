#include <iostream>
#include <ctime>
#include <stdlib.h>
//#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int maxNilai = 0;
    int kes = 3;
    int tebak = 0;
    int tebakan = 0;

    while ((maxNilai>100)||(maxNilai<10)) {
        cout << "\nMasukkan nilai tebakan (0-9): ";
        cin >> maxNilai;
        if (maxNilai > 9) cout << "Nilai Tebakan Terlalu tinggi\n";
        else if (maxNilai < 0) cout << "Nilai Tebakan Terlalu rendah\n";

        cout << "Silakan tebak nilai antara 0 sampai " << maxNilai << " !! ";
        srand((unsigned)time(0));
        tebak = (rand()%maxNilai)+1;
        cout << "\n(Kunci: ini adalah angka yang ditebak) : " << tebak << endl; //test the number

        while (kes > 0 && tebakan != tebak) {
            cout << "\nMasukkan tebakan Anda : ";
            cin >> tebakan;
            if (tebakan == tebak) {
                cout << "Tebakan Anda benar.\n";
                break;
            } else {
                kes--;
                if (tebakan > tebak) {
                    cout << "Tebakan Anda terlalu besar.\n";
                } else if (tebakan < tebak) {
                    cout << "Tebakan Anda terlalu kecil.\n";
                }
                cout << "Tebakan Anda salah, nyawa : " << kes << endl;
                if (kes == 0) {
                    cout << "Game over." << endl;
                }
            }
        }
    }
    char ch; cin >> ch;
    return 0;
}
