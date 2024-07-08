#include <iostream>
#include <string>
using namespace std;

// Base Class: Person
class Person {
protected:
    string name;

public:
    Person(const string& n) : name(n) {
        cout << "Person constructor called for " << name << endl;
    }

    virtual void display() const {
        cout << "Person: " << name << endl;
    }

    virtual ~Person() {
        cout << "Person destructor called for " << name << endl;
    }
};

// Derived Class: Employee
class Employee : virtual public Person {
protected:
    int empId;

public:
    Employee(const string& n, int id) : Person(n), empId(id) {
        cout << "Employee constructor called for " << name << endl;
    }

    void display() const override {
        cout << "Employee: " << name << ", ID: " << empId << endl;
    }

    ~Employee() override {
        cout << "Employee destructor called for " << name << endl;
    }
};

// Derived Class: Student
class Student : virtual public Person {
protected:
    string studentId;

public:
    Student(const string& n, const string& id) : Person(n), studentId(id) {
        cout << "Student constructor called for " << name << endl;
    }

    void display() const override {
        cout << "Student: " << name << ", Student ID: " << studentId << endl;
    }

    ~Student() override {
        cout << "Student destructor called for " << name << endl;
    }
};

// Derived Class: Manager (Multiple Inheritance)
class Manager : public Employee, public Student {
public:
    Manager(const string& n, int empId, const string& studentId)
        : Person(n), Employee(n, empId), Student(n, studentId) {
        cout << "Manager constructor called for " << name << endl;
    }

    void display() const override {
        cout << "Manager: " << name << ", ID: " << empId << ", Student ID: " << studentId << endl;
    }

    ~Manager() override {
        cout << "Manager destructor called for " << name << endl;
    }
};

int main() {
    cout << "Creating objects:" << endl;
    Manager manager("John Doe", 1001, "S12345");

    cout << "\nCalling display functions:" << endl;
    manager.Person::display();
    manager.Employee::display();
    manager.Student::display();
    manager.display();

    cout << "\nDestroying objects:" << endl;
    return 0;
}
