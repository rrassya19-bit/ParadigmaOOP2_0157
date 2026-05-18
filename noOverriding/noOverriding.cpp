#include <iostream>
using namespace std;

class baseClass {
    public:
        virtual void perkenalan() final {
            cout << "hallo saya function dari base class";
        }
};

// derivedClass mewarisi semua public member dari baseClass
class derivedClass : public baseClass {

};

int main() {
    return 0;
}