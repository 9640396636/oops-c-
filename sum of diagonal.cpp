#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    int matrix[n][n];
    cout << "Enter elements for the square matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int sumMainDiagonal = 0;
    for (int i = 0; i < n; i++) {
        sumMainDiagonal += matrix[i][i];
    }
    int sumSecondaryDiagonal = 0;
    for (int i = 0; i < n; i++) {
        sumSecondaryDiagonal += matrix[i][n - i - 1];
    }
    cout << "Sum of the main diagonal: " << sumMainDiagonal << endl;
    cout << "Sum of the secondary diagonal: " << sumSecondaryDiagonal << endl;

    return 0;
}
