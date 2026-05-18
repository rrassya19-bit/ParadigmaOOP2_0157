#include <iostream>
using namespace std;

class baseClass {
    public:
        // virtual = bisa di-override oleh class turunan
        // final   = TIDAK BOLEH di-override oleh class turunan (dikunci)
        virtual void perkenalan() final {
            cout << "hallo saya function dari base class";
        }
};

class derivedClass : public baseClass {
    public:
        void perkenalan1() {
            cout << "hallo saya function dari derived class";
        }
};

int main() {
    derivedClass a;   // Buat objek a dari class derivedClass
    a.perkenalan1();   // Panggil method perkenalan1 milik derivedClass

    return 0;  // Program selesai dengan sukses
}