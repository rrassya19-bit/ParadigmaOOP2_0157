#include <iostream>
using namespace std;

class orang {
    public:
        int umur;

        orang(int pUmur) : umur(pUmur) {
            cout << "orang dibuat dengan umur " << umur << "\n" << endl;
        }
};

class pekerja : public orang {
    public:
        pekerja(int pUmur) : orang(pUmur) {
            cout << "pekerja dibuat" << umur << "\n" << endl;
        }
};

class pelajar : public orang {
    public:
        pelajar(int pUmur) : orang(pUmur) {
            cout << "pelajar dibuat\n" << endl;
        }
};

// budi mewarisi pekerja DAN pelajar (multiple inheritance)
class budi : public pekerja, public pelajar {
    public:
        // Tanpa virtual: orang dibuat 2x (sekali dari pekerja, sekali dari pelajar)
        // orang(pUmur) TIDAK bisa dipanggil langsung di sini tanpa virtual
        budi(int pUmur) : pekerja(pUmur), pelajar(pUmur) {
            cout << "budi dibuat \n" << endl;
        }
};

int main() {
    budi a(12);  // Buat objek budi dengan umur 12
                 // Urutan constructor: orang(pekerja) → pekerja → orang(pelajar) → pelajar → budi
                 // Perhatikan orang dibuat 2x karena tidak pakai virtual!
    return 0;
}