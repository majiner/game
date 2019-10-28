#include <iostream>
#include <string>

using namespace std;

int main()
{
std::string nama_item = "";
    std::string prev_item = "";
    std::string item_kuat = "";
    std::string item_lemah = "";
    char lg = 'y';
    float pwr = 0;
    float prev_pwr = 0;
    float pwr_kuat = 0;
    float pwr_lemah = 0;
    bool first = true;

    while(lg=='y') {
        std::cout << "Masukkan nama item : ";
        std::cin >> nama_item;
        std::cout << "Masukkan power : ";
        std::cin >> pwr;
        std::cout << "Item Anda adalah : " << nama_item;
        std::cout << "\nPower : " << pwr;
        if (first == true) {
            prev_item = "Nothing";
            item_kuat = nama_item;
            item_lemah = nama_item;
            pwr_kuat = pwr;
            pwr_lemah = pwr;
        } else {
            if(pwr >= pwr_kuat) {
                pwr_kuat = pwr;
                item_kuat = nama_item;
            }else{
                if(pwr <= pwr_lemah) {
                    pwr_lemah = pwr;
                    item_lemah = nama_item;
                }

            }
        }

        std::cout << "\nItem sebelumnya : " << prev_item;
        std::cout << "\nItem terkuat : " << item_kuat;
        std::cout << "\nItem terlemah : " << item_lemah;

        prev_item = nama_item;
        prev_pwr = pwr;
        first = false;
        std::cout << "\nInput item lagi ? (y/n)" << std::endl;
        std::cin >> lg;
    }
    char ch; std::cin >> ch;
    return 0;
}
