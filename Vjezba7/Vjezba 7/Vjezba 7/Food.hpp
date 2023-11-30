#ifndef FOOD_HPP
#define FOOD_HPP

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Food {
private:
	static int counter;

public:
	Food();

	static void increment();
	static void decrement();
	static int getCounter();
	static void displayCounter();
};

int get_counter();

#endif // !FOOD_HPP
