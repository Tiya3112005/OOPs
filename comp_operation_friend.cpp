/*Create a class complex that contains two double data members. Overload +, - , and *
arithmetic operators using friend function, so that they can operate on the object of complex.
Then find the expression a - b * c + d (where a, b, c, and d are complex objects).*/
#include<iostream>
using namespace std;
class Complex{
    double real,img;
public:
    Complex(double r=0,double i=0){
        real=r;
        img=i;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    friend Complex operator +(Complex,Complex);
    friend Complex operator -(Complex,Complex);
    friend Complex operator *(Complex,Complex);
};
Complex operator +(Complex a,Complex b){
    return Complex(a.real+b.real,a.img+b.img);
}
Complex operator -(Complex a,Complex b){
    return Complex(a.real-b.real,a.img-b.img);
}
Complex operator *(Complex a,Complex b){
    double r=a.real*b.real-a.img*b.img;
    double i=a.real*b.img+a.img*b.real;
    return Complex(r,i);
}
int main(){
    Complex a(6,4);
    Complex b(3,2);
    Complex c(2,5);
    Complex d(1,3);
    Complex result= a -b * c+d;
    cout<<"AFTER EVALUATION: ";
    result.display();
}
