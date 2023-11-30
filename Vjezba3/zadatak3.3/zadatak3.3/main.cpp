#include"vecFunctions.hpp"

int main() {

	vector<int> vector = { 4,5,2,3,7,2,2,2,2 };

	cout << "Sum is: " << addZeroCalculateSumAndSort(vector) << endl;

	deleteElementAtPosition(vector, 0);
	cout << "Delete element on position 0 : ";
	outputVector(vector);
	deleteElementOfValue(vector, 2);
	cout << "Delete element of value 2: ";
	outputVector(vector);


	return 0;
}