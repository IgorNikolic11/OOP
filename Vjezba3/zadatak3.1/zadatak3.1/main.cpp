#include "vectorFunctions.hpp"


int main() {

	vector<int> fisrtVector;
	vector<int> secondVector;

	inputVector(fisrtVector, 4);
	outputVector(fisrtVector);

	inputVectorWithRange(secondVector,2,10);
	outputVector(secondVector);

	return 0;
}