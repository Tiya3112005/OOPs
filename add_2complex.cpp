//Write a program in C++ to add two complex numbers by creating objects.

#include<iostream>
using namespace std;
class Complex{
public:
    float real,img;
    Complex(float real=0,float img=0){
        this->real=real;
        this->img=img;
    }
    
    void input(){
        cout<<"ENTER THE REAL PART: ";
        cin>>real;
        cout<<"ENTER THE IMAGINARY PART: ";
        cin>>img;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    Complex add(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
int main(){
    Complex c1,c2,sum;
    c1.input();
    c2.input();
    sum = c1.add(c2);
    cout<<"AFTER ADDITION: ";
    sum.display();
}
