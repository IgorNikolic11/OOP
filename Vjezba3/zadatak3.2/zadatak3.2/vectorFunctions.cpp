#include "vectorFunctions.hpp"

void inputVector(vector<int>& vector, int numOfElements) {
	int temp;
	
	cout << "Enter " << numOfElements << " elements into the vector: " << endl;

	for (int i = 0; i < numOfElements; i++) {
		cin >> temp;
		vector.push_back(temp);
	}
}

void inputVectorWithRange(vector<int>& vector, int lowerRange, int upperRange) {
	int temp;

	cout << "Enter elements in range of " << lowerRange << " and " << upperRange << " into the vector: " << endl;
	
	while (true) {
		cin >> temp;

		if (temp < lowerRange || temp > upperRange) {
			break;
		}
		vector.push_back(temp);
	}
}

void outputVector(vector<int>&vector) {
	cout << "Elements of vector: " << endl;
	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << endl;
	}
}

void vectorFilter(vector<int>& vector1, vector<int>& vector2, vector<int>& vector3) {
	int counter = 0;
	for (int i = 0; i < vector1.size(); i++) {
		int counter = 0;
		for (int j = 0; j < vector1.size();j++) {
			if (vector1[i] == vector2[j]) {
				counter++;
			}
		}
		if (counter == 0) {
			vector3.push_back(vector1[i]);
		}
	}
}