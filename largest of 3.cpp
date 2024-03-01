#include <iostream>

int main() {
    int num1, num2, num3, largest;

 
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    std::cout << "The largest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << largest << std::endl;

    return 0;
}
