#include <iostream>
#include <iomanip>

using namespace std;

struct Matrix {
    int rows;
    int cols;
    float** data;
};

void inputMatrix(Matrix& mat) {
    cout << "Enter the dimensions of the matrix: ";
    cin >> mat.rows >> mat.cols;

    mat.data = new float* [mat.rows];
    for (int i = 0; i < mat.rows; ++i) {
        mat.data[i] = new float[mat.cols];

        cout << "Enter elements for row " << i + 1 << ": ";
        for (int j = 0; j < mat.cols; ++j) {
            cin >> mat.data[i][j];
        }
    }
}

Matrix addMatrices(const Matrix& mat1, const Matrix& mat2) {

    Matrix result;
    result.rows = mat1.rows;
    result.cols = mat1.cols;
    result.data = new float* [result.rows];

    for (int i = 0; i < result.rows; ++i) {
        result.data[i] = new float[result.cols];

        for (int j = 0; j < result.cols; ++j) {
            result.data[i][j] = mat1.data[i][j] + mat2.data[i][j];
        }
    }

    return result;
}

Matrix multiplyMatrices(const Matrix& mat1, const Matrix& mat2) {
    if (mat1.cols != mat2.rows) {
        cout << "Error with matrix sizes\n";
    }
    else {

        Matrix result;
        result.rows = mat1.rows;
        result.cols = mat2.cols;
        result.data = new float* [result.rows];

        for (int i = 0; i < result.rows; ++i) {
            result.data[i] = new float[result.cols];

            for (int j = 0; j < result.cols; ++j) {
                result.data[i][j] = 0;

                for (int k = 0; k < mat1.cols; ++k) {
                    result.data[i][j] += mat1.data[i][k] * mat2.data[k][j];
                }
            }
        }

        return result;
    }
}

Matrix transposeMatrix(Matrix& mat) {
    Matrix result;
    result.rows = mat.cols;
    result.cols = mat.rows;
    result.data = new float* [result.rows];

    for (int i = 0; i < result.rows; ++i) {
        result.data[i] = new float[result.cols];

        for (int j = 0; j < result.cols; ++j) {
            result.data[i][j] = mat.data[j][i];
        }
    }

    return result;
}

void printMatrix(Matrix& mat) {
    for (int i = 0; i < mat.rows; ++i) {
        for (int j = 0; j < mat.cols; ++j) {
            cout << fixed<<right << setprecision(4) << mat.data[i][j] << "\t";
        }
        cout << endl;
    }
}


void deleteMatrix(Matrix& mat) {
    for (int i = 0; i < mat.rows; ++i) {
        delete[] mat.data[i];
    }
    delete[] mat.data;
}

int main() {
    Matrix matrix1, matrix2, result;

    cout << "Input the first matrix:"<< endl;
    inputMatrix(matrix1);

    cout << "Input the second matrix: "<< endl;
    inputMatrix(matrix2);

    cout << "First matrix: "<<endl;
    printMatrix(matrix1);

    cout << "Second matrix: " << endl;
    printMatrix(matrix2);

    result = addMatrices(matrix1, matrix2);
    cout << "Sum of matrices: "<<endl;
    printMatrix(result);

    result = transposeMatrix(result);
    cout << "Transpose Matrix"<< endl;
    printMatrix(result);

    deleteMatrix(matrix1);
    deleteMatrix(matrix2);
    deleteMatrix(result);

    return 0;
}
