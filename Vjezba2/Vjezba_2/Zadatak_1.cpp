#include <iostream>
using namespace std;

void MinMax(int* arr, int& min, int& max, int len) {

	cout << "Enter arrary elements" << endl;
	
	for (int i = 0; i < len; i++)
	{
		cout << i + 1 << ". element:" << endl;
		cin >> arr[i];
	}

	min = arr[0];
	max = arr[0];

	for (int i = 0;i < len; i++) {

		if (min > arr[i])
		{
			min = arr[i];
		}
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

}

void main() {

	int min;
	int max;
	int len;

	cout << "Enter length of array" << endl;
	cin >> len;

	int* arr = new int[len];
	MinMax(arr,min,max,len);

	cout << "Min" << min << "Max" << max << endl;

}