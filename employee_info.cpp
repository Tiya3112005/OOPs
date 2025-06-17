#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    string department;
    float salary;

public:
    // Constructor
    Employee(string n, int a, string d, float s) {
        name = n;
        age = a;
        department = d;
        salary = s;
    }

    // Default constructor
    Employee() {
        name = "";
        age = 0;
        department = "";
        salary = 0.0;
    }

    // Function to input employee data
    void input() {
        cout << "Enter Name: ";
        cin.ignore();  // to avoid skipping due to previous input
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Department: ";
        cin.ignore();
        getline(cin, department);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display employee data
    void display() {
        cout << "Name: " << name << "\nAge: " << age
             << "\nDepartment: " << department << "\nSalary: " << salary << endl;
    }

    // Destructor
    ~Employee() {
        // Destructor message for dynamic demonstration
        cout << "Destructor called for employee: " << name << endl;
    }
};

int main() {
    // Static Initialization
    cout << "\n--- Static Initialization ---\n";
    Employee emp1("Alice", 30, "HR", 40000.5);
    emp1.display();

    // Dynamic Initialization
    int n;
    cout << "\nHow many employees you want to enter dynamically? ";
    cin >> n;

    Employee* empList = new Employee[n];  // array of n Employee objects (dynamic)

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee #" << (i + 1) << ":\n";
        empList[i].input();
    }

    cout << "\n--- Displaying Dynamic Employee Information ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee #" << (i + 1) << ":\n";
        empList[i].display();
    }

    // Deallocate memory using delete[]
    delete[] empList;

    return 0;
}
