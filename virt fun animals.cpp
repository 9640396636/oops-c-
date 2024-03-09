#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() const = 0;
};

class Cat : public Animal {
public:
    void speak() const override {
        cout << "Meow!" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Cat cat;
    Dog dog;

    cout << "Cat says: ";
    cat.speak();

    cout << "Dog says: ";
    dog.speak();

    return 0;
}
