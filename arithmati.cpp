#include <iostream>

int main() {
    
    int num1, num2;

    
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    if (num2 != 0) {
        float quotient = static_cast<float>(num1) / num2;

        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Difference: " << difference << std::endl;
        std::cout << "Product: " << product << std::endl;
        std::cout << "Quotient: " << quotient << std::endl;
    } else {
        std::cout << "Cannot perform division because the second integer is zero." << std::endl;
    }

    return 0;
}
