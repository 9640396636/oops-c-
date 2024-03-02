#include <iostream>
int main() {
    int num1, num2;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    num1 = (num1 > 0) ? num1 : -num1;
    num2 = (num2 > 0) ? num2 : -num2;
    int temp;
    do {
        temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    } while (num2 != 0);
    std::cout << "The GCD is: " << num1 << std::endl;
    return 0;
}
