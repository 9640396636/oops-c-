#include <iostream>

int main() {
    int number;
    unsigned long long factorial = 1;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Error! Factorial of a negative number is undefined." << std::endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }

        std::cout << "Factorial of " << number << " = " << factorial << std::endl;
    }

    return 0;
}
