#include <iostream>
#include <cmath>

int main() {
    double num;

  
    std::cout << "Enter a floating-point number: ";
    std::cin >> num;


    int floorResult = static_cast<int>(std::floor(num));
    int ceilResult = static_cast<int>(std::ceil(num));

    // Display the results
    std::cout << "Original number: " << num << std::endl;
    std::cout << "Rounded to nearest integer (using floor): " << floorResult << std::endl;
    std::cout << "Rounded to nearest integer (using ceil): " << ceilResult << std::endl;

    return 0;
}
