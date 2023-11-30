#include "stringvector.h"

void stringVectorFunction(vector<string>& stringVector) {
    int numOfStrings;
    string currString, flippedString;

    cout << "Input number of strings: " << endl;
    cin >> numOfStrings;

    cin.ignore();

    for (int i = 0; i < numOfStrings; i++) {
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, currString);

        flippedString = currString;
        reverse(flippedString.begin(), flippedString.end());

        stringVector.push_back(flippedString);
    }

    sort(stringVector.begin(), stringVector.end());
}
