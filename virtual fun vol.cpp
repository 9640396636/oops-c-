#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double volume() const = 0;
};

class Sphere : public Shape {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}

    double area() const override {
        return 4 * M_PI * radius * radius;
    }

    double volume() const override {
        return (4.0 / 3.0) * M_PI * pow(radius, 3);
    }
};

class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    double area() const override {
        return 2 * M_PI * radius * (radius + height);
    }

    double volume() const override {
        return M_PI * radius * radius * height;
    }
};

int main() {
    double sphereRadius = 5.0;
    double cylinderRadius = 3.0;
    double cylinderHeight = 7.0;

    Sphere sphere(sphereRadius);
    Cylinder cylinder(cylinderRadius, cylinderHeight);

    cout << "Sphere Area: " << sphere.area() << endl;
    cout << "Sphere Volume: " << sphere.volume() << endl;

    cout << "Cylinder Area: " << cylinder.area() << endl;
    cout << "Cylinder Volume: " << cylinder.volume() << endl;

    return 0;
}
