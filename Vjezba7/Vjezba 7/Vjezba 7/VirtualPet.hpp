#ifndef VIRTUAL_PET_HPP
#define VIRTUAL_PET_HPP

#include<iostream>
#include<string>
#include<vector>

using namespace std;


class VirtualPet {
private:
	string name;
	string sort;
	int hungerPoints;
	int happinessPoints;
	bool isAwake;
	int portionsEaten;

public:
	VirtualPet(string name, string sort);
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

	bool operator==(VirtualPet& other);
	bool operator!=(VirtualPet& other);
	VirtualPet& operator=(VirtualPet& other);
	VirtualPet& operator++();

	bool operator<(VirtualPet& other);
	bool operator>(VirtualPet& other);
	bool operator<=(VirtualPet& other);
	bool operator>=(VirtualPet& other);

	friend ostream& operator<<(ostream& os,VirtualPet& pet);

};

#endif // !VIRTUAL_PET_HPP
