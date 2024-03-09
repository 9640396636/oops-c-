#include <iostream>

using namespace std;

class Vehicle {
public:
    virtual void drive() const = 0;
};

class Car : public Vehicle {
public:
    void drive() const override {
        cout << "Car is being driven." << endl;
    }
};

class Truck : public Vehicle {
public:
    void drive() const override {
        cout << "Truck is being driven." << endl;
    }
};

int main() {
    Car car;
    Truck truck;

    cout << "Driving the car: ";
    car.drive();

    cout << "Driving the truck: ";
    truck.drive();

    return 0;
}
