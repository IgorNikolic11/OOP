#ifndef OWNER_HPP
#define OWNER_HPP

#include<iostream>
#include<vector>
#include<string>
#include"VirtualPet.hpp"

using namespace std;

class Owner {
private:
	string name;
	vector<VirtualPet> pets;

public:
	Owner(string name);
	Owner(const Owner& copy);

	void addPet(VirtualPet& pet);
	void petActions();
	int happinessOfHappiestPet();
	void displayOwnerAndPets();
	void updateDisplay();
	VirtualPet& getPet(int index);
};

#endif // !OWNER_HPP
