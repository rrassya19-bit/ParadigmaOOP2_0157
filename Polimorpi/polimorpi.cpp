#include <iostream>
using namespace std;

class remoteLampu {
    private:
        string saklarNo[10];  // Array private berisi 10 slot nama lampu

    public:
        void setSaklarNo(int i, string value) {
            saklarNo[i] = value;  // Simpan value ke array pada posisi i
        }
        string getSaklarNo(int i) {
            return saklarNo[i];  // Kembalikan nilai array pada posisi i
        }
};

int main() {
    remoteLampu lampuRumah;  // Buat objek remoteLampu bernama lampuRumah

    return 0;
}