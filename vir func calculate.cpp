#include <iostream>

using namespace std;

class Employee {
public:
    virtual double calculatePay() const = 0;
};

class Manager : public Employee {
public:
    double calculatePay() const override {
        return 5000.0; 
};

class Engineer : public Employee {
public:
    double calculatePay() const override {
        return 4000.0; 
    }
};

int main() {
    Manager manager;
    Engineer engineer;

    cout << "Manager's pay: $" << manager.calculatePay() << endl;
    cout << "Engineer's pay: $" << engineer.calculatePay() << endl;

    return 0;
}

