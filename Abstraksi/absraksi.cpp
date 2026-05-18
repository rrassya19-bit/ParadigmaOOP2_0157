#include <iostream>
using namespace std;

class AbstraksiKlas {
    private:
        string x, y;  // Hanya bisa diakses di dalam class (tersembunyi dari luar)

    public:
        // Method untuk mengisi nilai private member dari luar class
        void setXY(string a, string b) {
            x = a;  // Isi x dengan nilai parameter a
            y = b;  // Isi y dengan nilai parameter b
        }

        // Method untuk menampilkan nilai private member ke layar
        void display() {
            cout << "x = " << x << endl;  // Tampilkan nilai x
            cout << "y = " << y << endl;  // Tampilkan nilai y
        }
};

int main() {
    return 0;
}