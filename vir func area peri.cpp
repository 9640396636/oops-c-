#include <iostream>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
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

    double perimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Implementation of area for Triangle using Heron's formula
    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Rectangle rect(5, 3);
    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl;

    Triangle tri(3, 4, 5);
    cout << "Triangle Area: " << tri.area() << endl;
    cout << "Triangle Perimeter: " << tri.perimeter() << endl;

    return 0;
}
