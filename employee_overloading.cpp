/*Assume that object represents an employee report that contains the information about
employee id, total bonus, and total overtime in a particular year. Use four objects to represent
four employees' reports. Write a program that display report information. Use setpara()
overloaded member functions to set report attributes by passing/without passing the
arguments and member function displayreport() to show the reports according to parameter
passed.*/
#include<iostream>
using namespace std;
class Employee{
    int employee_id;
    double total_bonus;
    int total_overtime;
public:
    Employee(){
       employee_id=0;
       total_bonus=0;
       total_overtime=0;  
    }
    void setpara(){
        employee_id=254;
        total_bonus=10000;
        total_overtime=36;
    }
    void setpara(int employee_id, double total_bonus,int total_overtime){
        this->employee_id=employee_id;
        this->total_bonus=total_bonus;
        this->total_overtime=total_overtime;
    }
    void display(){
        cout<<"EMPLOYEE DETAILS: "<<endl;
        cout<<"ID:"<<employee_id<<endl;
        cout<<"BONUS AMOUNT:"<<total_bonus<<endl;
        cout<<"OVERTIME: "<<total_overtime<<"hours in a year"<<endl;
    }
};
int main(){
    Employee e1,e2,e3;
    e1.setpara(25,3000,9);
    e2.setpara();
    e3.setpara();
    e1.display();
    e2.display();
    e3.display();
    return 0;
}
