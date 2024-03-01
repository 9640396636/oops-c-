#include <iostream>

int main() {
    float num1, num2;

    std::cout << "Enter the first floating-point number: ";
    std::cin >> num1;

    std::cout << "Enter the second floating-point number: ";
    std::cin >> num2;

    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;

   
    if (num2 != 0) {
        float division = num1 / num2;
        float modulo = fmod(num1, num2);

        std::cout << "Sum: " << sum << std::endl;
        std::cout << "Difference: " << difference << std::endl;
        std::cout << "Product: " << product << std::endl;
        std::cout << "Division: " << division << std::endl;
        std::cout << "Modulo: " << modulo << std::endl;
    } else {
        std::cout << "Cannot perform division because the second number is zero." << std::endl;
    }

    return 0;
}
