#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    virtual void work() {
        cout << "Person is working" << endl;
    }
};

class Employee : public Person {
public:
    void work() override {
        cout << "Employee is working" << endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        cout << "Manager is working" << endl;
    }
};

int main() {
    Person *person1 = new Person();
    Person *employee1 = new Employee();
    Person *manager1 = new Manager();

    person1->work();    
    employee1->work();  
    manager1->work();   

    delete person1;
    delete employee1;
    delete manager1;

    return 0;
}
