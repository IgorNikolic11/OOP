#include"VirtualPet.hpp"

VirtualPet::VirtualPet(string name, string sort, Owner &owner) 
	: name(name), sort(sort), hungerPoints(0), happinessPoints(10), isAwake(true),owner(owner) {}

VirtualPet::VirtualPet(const VirtualPet& copy)
	: name(copy.name), sort(copy.sort), hungerPoints(copy.hungerPoints),
	happinessPoints(copy.happinessPoints), isAwake(copy.isAwake) , owner(copy.owner){}



void VirtualPet::eat() {
	if (!isAwake) {
		isAwake = true;
	}
	hungerPoints = 0;
	happinessPoints += 5;
	cout <<"POINTS:" << happinessPoints;
}

void VirtualPet::sleep() {
	if (hungerPoints != 0) {
		cout << name << " is too hungry to sleep!" << endl;
	}
	else {
		if (!isAwake) {
			cout << "Already sleeping";
		}
		else {
			isAwake = false;
			hungerPoints += 5;
			happinessPoints += 5;
		}
	}
	
}

void VirtualPet::play() {
	if (!isAwake) {
		isAwake = true;
	}
	hungerPoints += 5;
	happinessPoints += 5;
}


string VirtualPet::getName() {
	return name;
}

string VirtualPet::getSort() {
	return sort;
}

int VirtualPet::getHappinessPoints() {
	return happinessPoints;
}

int VirtualPet::getHungerPoints() {
	return hungerPoints;
}

bool VirtualPet::getIsAwake() {
	return isAwake;
}

void VirtualPet::displayPet() {
	cout << "  Name: " << name << endl;
	cout << "  Sort: " << sort << endl;
	cout << "  Hunger Points: " << hungerPoints << endl;
	cout << "  Happiness Points: " << happinessPoints << endl;
	cout << "  Awake: " << (isAwake ? "Yes" : "No") << endl;
	cout << endl;
}