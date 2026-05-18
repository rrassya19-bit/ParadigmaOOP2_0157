#include <iostream>
using namespace std;

class orang {
    public:
        int umur;

        orang(int pUmur) : umur(pUmur) {
            cout << "orang dibuat dengan umur " << umur << "\n" << endl;
        }
};

// virtual public = cegah duplikasi objek orang saat dipakai multiple inheritance
class pekerja : virtual public orang {
    public:
        pekerja(int pUmur) : orang(pUmur) {
            cout << "pekerja dibuat" << umur << "\n" << endl;
        }
};

// virtual public = cegah duplikasi objek orang saat dipakai multiple inheritance
class pelajar : virtual public orang {
    public:
        pelajar(int pUmur) : orang(pUmur) {
            cout << "pelajar dibuat\n" << endl;
        }
};

int main() {
    return 0;
}