#include "Owner.hpp"

int main() {
    srand(time(0));
    
    int numberOfOwners = 2, numberOfPets = 2, numberOfActions = 2;
    vector<VirtualPet> allPets;

    Owner owner1("Igor");
    Owner owner2("Bruno");

    vector<Owner> owners;
    owners.push_back(owner1);
    owners.push_back(owner2);

    VirtualPet pet1_1("Fluff","dog",owner1);
    VirtualPet pet1_2("Paw", "cat",owner2);
    owner1.addPet(pet1_1);
    owner1.addPet(pet1_2);
 

    VirtualPet pet2_1("Odie", "dog",owner2);
    VirtualPet pet2_2("Garfield", "cat",owner2);
    owner2.addPet(pet2_1);
    owner2.addPet(pet2_2);
    
    owner1.getPet(0).eat();

    cout << "------AFTER ACTIONS------" << endl;

    pet1_1.displayPet();


    owner1.displayOwnerAndPets();
    owner2.displayOwnerAndPets();

    if (owner1.happinessOfHappiestPet() < owner2.happinessOfHappiestPet()) {
        cout << "Owner 2 has the happiest pet!" << endl;
    }
    else if (owner1.happinessOfHappiestPet() > owner2.happinessOfHappiestPet()) {
        cout << "Owner 1 has the happiest pet!" << endl;
    }
    else {
        cout << "Equal happiness!" << endl;
    }

    return 0;
}
