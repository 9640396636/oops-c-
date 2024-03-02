#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the dynamic array: ";
    cin >> n;
    int *dynamicArray = new int[n];
    cout << "Enter " << n << " elements for the dynamic array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> dynamicArray[i];
    }
    cout << "Elements of the dynamic array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    delete[] dynamicArray;

    return 0;
}
