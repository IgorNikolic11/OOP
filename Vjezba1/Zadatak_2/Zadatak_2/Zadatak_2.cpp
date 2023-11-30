#include <iostream>
using namespace std;

int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int& getElement(int i) {
    return arr[i];
}

int main(void) {
    int i;
    cout << "Enter index of the element you wish to increment: ";
    cin >> i;

    int& result = getElement(i);

    result++;

    cout << "At index " << i << " the new element value is " << result << endl;

    return 0;
}
