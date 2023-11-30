#include"Food.hpp"

int Food::counter = 0;

Food::Food() {
    increment();
}

void Food::increment() {
    counter++;
}

void Food::decrement() {
    counter--;
}

int Food::getCounter() {
    return counter;
}

void Food::displayCounter() {
    cout << "Counter: " << counter << endl;
}

int get_counter() {
    return Food::getCounter();
}
