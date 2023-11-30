#include"vectorFunctions.hpp"


int main() {
	vector<int> vector1;
	vector<int> vector2;
	vector<int> vector3;

	inputVector(vector1,5);
	outputVector(vector1);
	inputVector(vector2, 5);
	outputVector(vector2);
	vectorFilter(vector1, vector2, vector3);
	outputVector(vector3);

	return 0;
}