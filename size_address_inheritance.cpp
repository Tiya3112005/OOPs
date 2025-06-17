#include <iostream>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;
public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void printAddress() {
        cout << "Address of Person object: " << this << endl;
    }
};

// Derived class Student
class Student : public Person {
    int roll;
public:
    void setRoll(int r) {
        roll = r;
    }

    void show() {
        cout << "Student: " << name << ", Age: " << age << ", Roll: " << roll << endl;
    }

    void printAddress() {
        cout << "Address of Student object: " << this << endl;
    }
};

// Derived class Employee
class Employee : public Person {
    int empID;
public:
    void setID(int id) {
        empID = id;
    }

    void show() {
        cout << "Employee: " << name << ", Age: " << age << ", ID: " << empID << endl;
    }

    void printAddress() {
        cout << "Address of Employee object: " << this << endl;
    }
};

// Main function
int main() {
    // Create objects
    Person p1, p2;
    Student s1, s2;
    Employee e1, e2;

    // Input details
    cout << "\nEnter Person 1:\n";
    p1.getData();

    cout << "\nEnter Person 2:\n";
    p2.getData();

    cout << "\nEnter Student 1:\n";
    s1.getData(); s1.setRoll(101);

    cout << "\nEnter Student 2:\n";
    s2.getData(); s2.setRoll(102);

    cout << "\nEnter Employee 1:\n";
    e1.getData(); e1.setID(201);

    cout << "\nEnter Employee 2:\n";
    e2.getData(); e2.setID(202);

    // Print addresses
    cout << "\n--- Object Addresses ---\n";
    p1.printAddress();
    p2.printAddress();
    s1.printAddress();
    s2.printAddress();
    e1.printAddress();
    e2.printAddress();

    // Print object sizes
    cout << "\n--- Object Sizes ---\n";
    cout << "Size of Person: " << sizeof(Person) << " bytes" << endl;
    cout << "Size of Student: " << sizeof(Student) << " bytes" << endl;
    cout << "Size of Employee: " << sizeof(Employee) << " bytes" << endl;

    // Show data
    cout << "\n--- Records ---\n";
    s1.show(); s2.show();
    e1.show(); e2.show();

    return 0;
}

