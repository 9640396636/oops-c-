#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Rectangle rectangle(5, 3);
    Circle circle(4);

    cout << "Area of Rectangle: " << rectangle.area() << endl;
    cout << "Area of Circle: " << circle.area() << endl;

    return 0;
}
