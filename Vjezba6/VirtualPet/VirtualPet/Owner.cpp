#include"Owner.hpp"
#include<time.h>
#include<cstdlib>


Owner::Owner(string name) : name(name) {}
Owner::Owner(const Owner& copy) : name(copy.name), pets(copy.pets) {}

void Owner::addPet(VirtualPet& pet) {
	pets.push_back(pet);
}


void Owner::petActions() {
	for (VirtualPet& pet : pets) {
		cout << "Hello" << endl;
	}
}

int Owner::happinessOfHappiestPet() {
	int max = 0;
	int temp;
	for (VirtualPet& pet : pets) {
		temp = pet.getHappinessPoints();
		if (temp > max) {
			max = temp;
		}
	}
	return max;
}

void Owner::updateDisplay() {
	for (VirtualPet& pet : pets) {
		cout << "  Name: " << pet.getName() << endl;
		cout << "  Sort: " << pet.getSort() << endl;
		cout << "  Hunger Points: " << pet.getHungerPoints() << endl;
		cout << "  Happiness Points: " << pet.getHappinessPoints() << endl;
		cout << "  Awake: " << (pet.getIsAwake() ? "Yes" : "No") << endl;
		cout << endl;
	}
}

void Owner::displayOwnerAndPets() {
	cout << "Owner: " << name << endl;
	cout << "Pets:" << endl;
	updateDisplay();
}

VirtualPet& Owner::getPet(int index) {
	return pets[index];
}