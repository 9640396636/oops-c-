#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " elements for the first array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the size of the second array: ";
    cin >> m;

    int arr2[m];
    cout << "Enter " << m << " elements for the second array:" << endl;
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int mergedArr[n + m];
    for (int i = 0; i < n; i++) {
        mergedArr[i] = arr1[i];
    }

    for (int i = 0; i < m; i++) {
        mergedArr[n + i] = arr2[i];
    }

    cout << "Merged Array:" << endl;
    for (int i = 0; i < n + m; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
