#include <iostream>
using namespace std;

class baseClass {
    public:
        virtual void perkenalan() final {
            cout << "hallo saya function dari base class";
        }
};

class derivedClass : public baseClass {
    public:   // Semua method di bawah bisa diakses dari luar class

};

int main() {
    return 0;
}