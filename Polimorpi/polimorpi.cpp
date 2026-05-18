#include <iostream>
using namespace std;

class remoteLampu {
    private:
        string saklarNo[10];  // Array private berisi 10 slot nama lampu

    public:
        // Method untuk mengisi nama lampu pada posisi indeks i
        void setSaklarNo(int i, string value) {
            saklarNo[i] = value;  // Simpan value ke array pada posisi i
        }
        // Method untuk mengambil nama lampu pada posisi indeks i
        string getSaklarNo(int i) {
            return saklarNo[i];  // Kembalikan nilai array pada posisi i
        }
};

int main() {
    remoteLampu lampuRumah;  // Buat objek remoteLampu bernama lampuRumah

    // Isi nama lampu pada masing-masing indeks
    lampuRumah.setSaklarNo(0, "lampu teras rumah");  // Indeks 0
    lampuRumah.setSaklarNo(1, "lampu ruang tamu");   // Indeks 1
    lampuRumah.setSaklarNo(2, "lampu kamar tidur");  // Indeks 2
    lampuRumah.setSaklarNo(3, "lampu dapur");        // Indeks 3

    // Tampilkan nama lampu berdasarkan indeks
    cout << lampuRumah.getSaklarNo(0) << endl;  // Tampilkan indeks 0
    cout << lampuRumah.getSaklarNo(2) << endl;  // Tampilkan indeks 2
    cout << lampuRumah.getSaklarNo(3) << endl;  // Tampilkan indeks 3
    cout << lampuRumah.getSaklarNo(4) << endl;  // Tampilkan indeks 4 (kosong)

    return 0;  // Program selesai dengan sukses
}