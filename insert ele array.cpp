#include <iostream>
using namespace std;

int main() {
    int n, pos, value;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n + 1];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the position where the element should be inserted (0-based indexing): ";
    cin >> pos;
    cout << "Enter the value to be inserted: ";
    cin >> value;
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;

    n++;

    cout << "Updated array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
