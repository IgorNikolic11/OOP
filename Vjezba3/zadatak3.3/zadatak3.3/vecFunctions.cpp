#include"vecFunctions.hpp"

int addZeroCalculateSumAndSort(vector<int>& vector) {
	int sum = 0;

	vector.insert(min_element(vector.begin(),vector.end()),0);

	sum = accumulate(max_element(vector.begin(), vector.end()) + 1,vector.end(),0);

	outputVector(vector);

	sort(vector.begin(), vector.end());

	outputVector(vector);

	return sum;
}

void outputVector(vector<int>& vector) {
	cout << "Vector is: ";
	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << " ";
	}
	cout << endl;
}


void deleteElementAtPosition(vector<int>& vector, int positionOfElement) {
	vector.erase(vector.begin() + positionOfElement);
}

void deleteElementOfValue(vector<int>& vector, int valueOfElement) {
	vector.erase(remove(vector.begin(),vector.end(),valueOfElement),vector.end());
}


