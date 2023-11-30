#include "VirtualPet.hpp"

using namespace std;

int main() {
    VirtualPet pet1("Dug", "Dog");
    VirtualPet pet2("Bird", "Cat");
    VirtualPet pet3("Bugo", "Bird");

    cout << "Pet1: " << pet1 << endl;
    cout << "Pet2: " << pet2 << endl;

    pet1.eat();
    pet2.play();

    cout << "Pet1 after eating: " << pet1 << endl;
    cout << "Pet2 after playing: " << pet2 << endl;


    cout << "Dog and cat comparison: " << endl;
    if (pet1 == pet2) {
        cout << "Pet1 and Pet2 are the same." << endl;
    }
    else {
        cout << "Pet1 and Pet2 are not the same." << endl;
    }

    cout << "Pet3 set to equal pet 1 and check if they are the same: " << endl;

    pet3 = pet1;

    if (pet1 == pet3) {
        cout << "Pet1 and Pet3 are the same." << endl;
    }
    else {
        cout << "Pet1 and Pet3 are not the same." << endl;
    }

    ++pet3;
    cout << "Pet3 after ++" << endl;
    cout << pet3;

    return 0;
}
