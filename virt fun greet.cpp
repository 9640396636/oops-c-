#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    virtual void greet() const = 0;
};

class Student : public Person {
public:
    void greet() const override {
        cout << "Hello, I'm a student!" << endl;
    }
};

class Teacher : public Person {
public:
    void greet() const override {
        cout << "Hello, I'm a teacher!" << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Student greets: ";
    student.greet();

    cout << "Teacher greets: ";
    teacher.greet();

    return 0;
}
