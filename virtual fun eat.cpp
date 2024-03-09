#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Herbivore : public Animal {
public:
    void eat() override {
        cout << "Herbivore is eating plants" << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() override {
        cout << "Carnivore is eating meat" << endl;
    }
};

int main() {
    Animal *animal1 = new Animal();
    Animal *herbivore1 = new Herbivore();
    Animal *carnivore1 = new Carnivore();

    animal1->eat();      
    herbivore1->eat();   
    carnivore1->eat();   

    delete animal1;
    delete herbivore1;
    delete carnivore1;

    return 0;
}
