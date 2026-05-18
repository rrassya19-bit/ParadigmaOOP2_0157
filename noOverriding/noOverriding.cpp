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

int main() {
    return 0;
}