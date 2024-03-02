#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows for the 2D array: ";
    cin >> rows;
    cout << "Enter the number of columns for the 2D array: ";
    cin >> cols;
    int **dynamicArray = new int *[rows]; // Allocate memory for rows

    for (int i = 0; i < rows; i++) {
        dynamicArray[i] = new int[cols]; 
    }
    cout << "Enter elements for the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> dynamicArray[i][j];
        }
    }

    cout << "Elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] dynamicArray[i]; 
    }
    delete[] dynamicArray; 

    return 0;
}
