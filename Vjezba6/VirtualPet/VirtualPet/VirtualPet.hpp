#ifndef VIRTUAL_PET_HPP
#define VIRTUAL_PET_HPP

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Owner;

class VirtualPet {
private:
	string name;
	string sort;
	int hungerPoints;
	int happinessPoints;
	bool isAwake;
	Owner& owner;

public:
	VirtualPet(string name, string sort,Owner &owner);
	VirtualPet(const VirtualPet& copy);

	void eat();
	void sleep();
	void play();

	string getName();
	string getSort();
	int getHungerPoints();
	int getHappinessPoints();
	bool getIsAwake();
	void displayPet();

};

#endif // !VIRTUAL_PET_HPP
