#include"VirtualPet.hpp"

VirtualPet::VirtualPet(string name, string sort)
	: name(name), sort(sort), hungerPoints(0), happinessPoints(10), isAwake(true), portionsEaten(0){}

VirtualPet::VirtualPet(const VirtualPet& copy)
	: name(copy.name), sort(copy.sort), hungerPoints(copy.hungerPoints),
	happinessPoints(copy.happinessPoints), isAwake(copy.isAwake), portionsEaten(copy.portionsEaten){}



void VirtualPet::eat() {
	if (!isAwake) {
		isAwake = true;
	}
	hungerPoints = 0;
	happinessPoints += 5;
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


bool VirtualPet::operator==(VirtualPet& other) {
	return (name == other.name) && (sort == other.sort) &&
		(hungerPoints == other.hungerPoints) && (happinessPoints == other.happinessPoints) &&
		(isAwake == other.isAwake);
}


bool VirtualPet::operator!=(VirtualPet& other) {
	return !(*this == other);
}

VirtualPet& VirtualPet::operator=(VirtualPet& other) {
	name = other.name;
	sort = other.sort;
	hungerPoints = other.hungerPoints;
	happinessPoints = other.happinessPoints;
	isAwake = other.isAwake;

	return *this;
}

VirtualPet& VirtualPet::operator++(){
	hungerPoints += 2;
	portionsEaten++;
	return *this;
}

bool VirtualPet::operator<(VirtualPet& other){
	return happinessPoints < other.happinessPoints;
}

bool VirtualPet::operator>(VirtualPet& other)  {
	return happinessPoints > other.happinessPoints;
}

bool VirtualPet::operator<=(VirtualPet& other){
	return happinessPoints <= other.happinessPoints;
}

bool VirtualPet::operator>=(VirtualPet& other){
	return happinessPoints >= other.happinessPoints;
}

ostream& operator<<(ostream& os,VirtualPet& pet) {
	os << "Name: " << pet.name << "\n";
	os << "Sort: " << pet.sort << "\n";
	os << "Hunger Points: " << pet.hungerPoints << "\n";
	os << "Happiness Points: " << pet.happinessPoints << "\n";
	os << "Awake: " << (pet.isAwake ? "Yes" : "No") << "\n";
	os << "Portions Eaten: " << pet.portionsEaten << "\n";
	return os;
}