#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> item("item3","item4");//tambahkan langsung item
    vector<string>::iterator penunjuk; //iterator untuk navigasi
    item.push_back("item1"); //tambah item
    item.push_back("item2");

    //tampilkan item menggunakan iterator
    for (penunjuk = item.begin(); penunjuk != item.end();++penunjuk) {
        cout << *penunjuk << endl;
    }
    cout << endl;
    item.erase(item.begin()+3); //hapus item ke 4

    for (penunjuk = item.begin(); penunjuk != item.end();++penunjuk) {
        cout << *penunjuk << endl;
    }

    //cout << item.size() << endl;
    return 0;
}
