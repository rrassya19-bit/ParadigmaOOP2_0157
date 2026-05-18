#include <iostream>
using namespace std;

class orang {
    public:
        int umur;

        orang(int pUmur) : umur(pUmur) {
            cout << "orang dibuat dengan umur " << umur << "\n" << endl;
        }
};

// Inheritance biasa (tanpa virtual) = orang akan dibuat 2x jika dipakai multiple inheritance
class pekerja : public orang {
    public:
        pekerja(int pUmur) : orang(pUmur) {
            cout << "pekerja dibuat" << umur << "\n" << endl;
        }
};

// Inheritance biasa (tanpa virtual) = orang akan dibuat 2x jika dipakai multiple inheritance
class pelajar : public orang {
    public:
        pelajar(int pUmur) : orang(pUmur) {
            cout << "pelajar dibuat\n" << endl;
        }
};

int main() {
    return 0;
}