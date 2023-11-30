#include <iostream>
using namespace std;

struct Vector {
    int* elements;  
    int logicalSize; 
    int physicalSize;
};

void vector_new(Vector& v, int size) {
    v.elements = new int[size];
    v.logicalSize = 0;
    v.physicalSize = size;
}

void vector_delete(Vector& v) {
    delete[] v.elements;
    v.logicalSize = 0;
    v.physicalSize = 0;
}

void vector_push_back(Vector& v, int value) {
    if (v.logicalSize == v.physicalSize) {
        int* newElements = new int[v.physicalSize * 2];
        for (int i = 0; i < v.logicalSize; ++i) {
            newElements[i] = v.elements[i];
        }
        delete[] v.elements;
        v.elements = newElements;
        v.physicalSize *= 2;
    }

    v.elements[v.logicalSize] = value;
    ++v.logicalSize;
}

void vector_display(Vector& v) {
    cout << "Vector content: ";
    for (int i = 0; i < v.logicalSize; ++i) {
        cout << v.elements[i] << " ";
    }
    cout << endl;
}

int main() {
    Vector vector;
    vector_new(vector, 5);

    cout << "Logical Size: " << vector.logicalSize << endl;
    cout << "Physical Size: " << vector.physicalSize << endl;

    vector_push_back(vector, 42);
    vector_push_back(vector, 73);

    cout << "Logical Size: " << vector.logicalSize << endl;
    cout << "Physical Size: " << vector.physicalSize << endl;

    vector_display(vector);

    vector_delete(vector);

    return 0;
}
