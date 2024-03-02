#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    for (int num : {1, 22, 333, 4444, 55555}) {
        sum = 0; // Reset sum for each number
                for (int i = 1; i <= num / 2; i++) { == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            cout << num << " is a perfect number." << endl;
        } else {
            cout << num << " is not a perfect number." << endl;
        }
    }

    return 0;
}
