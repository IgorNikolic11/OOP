#include "stringvector.h"

int main() {
    vector<string> stringVector;

    stringVectorFunction(stringVector);
    cout << "Sorted flipped vector of strings: " << endl;

    for (const string& str : stringVector) {
        cout << str << endl;
    }

    return 0;
}
