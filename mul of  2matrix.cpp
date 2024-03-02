#include <iostream>
using namespace std;
int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows for the first matrix: ";
    cin >> rows1;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> cols1;
    cout << "Enter the number of rows for the second matrix: ";
    cin >> rows2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> cols2;
    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 0;
    }
    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];
    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
