#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
    string kata;
    int jml_hrf;
    srand(static_cast<unsigned int>(time(0)));

    cout << "Masukkan kata : ";
    cin >> kata;
    jml_hrf = kata.size();
    cout << "\nJumlah huruf dari ~ " << kata << "~ adalah : " << jml_hrf << endl;
    string acak = kata;

    for (int i = 0; i < jml_hrf; ++i) {
        int huruf0 = (rand() % jml_hrf);
        int huruf1 = (rand() % jml_hrf);
        char temp = acak[huruf1];
        acak[huruf0] = acak[huruf1];
        acak[huruf1] = temp;
    }

    cout << "Hasil acak kata : " << acak << endl;


    return 0;
}
