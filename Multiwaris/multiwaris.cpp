#include <iostream>
using namespace std;

class orang {
    public:
        int umur;

        orang(int pUmur) : umur(pUmur) {
            cout << "orang dibuat dengan umur " << umur << "\n" << endl;
        }
};

class pekerja : virtual public orang {
    public:
        pekerja(int pUmur) : orang(pUmur) {
            cout << "pekerja dibuat" << umur << "\n" << endl;
        }
};

class pelajar : virtual public orang {
    public:
        pelajar(int pUmur) : orang(pUmur) {
            cout << "pelajar dibuat\n" << endl;
        }
};

// budi mewarisi pekerja DAN pelajar (multiple inheritance)
class budi : public pekerja, public pelajar {
    public:
        // orang(pUmur) wajib dipanggil di sini karena pakai virtual inheritance
        // tanpa virtual, orang akan dibuat 2x (duplikat)
        budi(int pUmur) : pekerja(pUmur), pelajar(pUmur), orang(pUmur) {
            cout << "budi dibuat \n" << endl;
        }
};

int main() {
    budi a(12);  // Buat objek budi dengan umur 12
                 //Urutan constructor: orang → pekerja → pelajar → budi
    return 0;
}