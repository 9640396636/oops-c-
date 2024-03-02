#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    cout << "Enter the size of the array: ";
    cin >> n;
    double arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }
    double average = sum / n;
    cout << "Average of all elements in the array: " << average << endl;

    return 0;
}
