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
};

int main() {
    return 0;
}