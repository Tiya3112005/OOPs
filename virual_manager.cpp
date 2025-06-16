/*Create a class Person and two derived classes Employee, and
Student, inherited from class Person. Now create a class Manager which is
derived from two base classes Employee and Student. Show the use of the
virtual base class.*/
#include<iostream>
#include<string>
using namespace std;
class Person{
    string name;
public:
    void persondata(){
        cout<<"ENTER THE NAME: ";
        cin>>name;
    }
    void showPdata(){
        cout<<"NAME: "<<name<<endl;
    }    
};
class Employee: virtual public Person{
    int age;
public:
    void employeedata(){
        cout<<"ENTER THE AGE:";
        cin>>age;
    }
    void showEdata(){
        cout<<"AGE: "<<age<<endl;
    }
};
class Student: virtual public Person{
    int roll_no;
public:
    void studentdata(){
        cout<<"ENTER THE ROLL NUMBER:";
        cin>>roll_no;
    }
    void showSdata(){
        cout<<"ROLL NUMBER: "<<roll_no<<endl;
    }
};
class Manager: public Employee, public Student{
    
public:
    void managerdata(){
        persondata();
        employeedata();
        studentdata();
    }
    
    void showMdata(){
        showPdata();
        showEdata();
        showSdata();
        
    }
};

int main(){
    Manager m;
    m.managerdata();
    cout<<"MANAGER DETAILS: "<<endl;
    m.showMdata();
    
}
