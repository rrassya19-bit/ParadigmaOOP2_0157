#include <iostream>
using namespace std;

class orang {
    public:
        int umur;  // Atribut umur yang bisa diakses class turunan

        // Constructor: isi umur dan cetak pesan saat objek dibuat
        orang(int pUmur) : umur(pUmur) {
            cout << "orang dibuat dengan umur " << umur << "\n" << endl;
        }
};

int main() {
    return 0;
}