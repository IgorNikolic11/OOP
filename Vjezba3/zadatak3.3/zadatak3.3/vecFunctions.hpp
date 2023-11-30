#ifndef VEC_FUNCTIONS_HPP
#define VEC_FUNCTIONS_HPP
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int addZeroCalculateSumAndSort(vector<int> &vector);
void outputVector(vector<int>& vector);

void deleteElementAtPosition(vector<int> &vector,int positionOfElement);
void deleteElementOfValue(vector<int>& vector, int valueOfElement);

#endif // !VEC_FUNCTIONS_HPP
