/*Write a program in C++ to implement class ADD that will have 3 overloaded functions. 1st one will
add two integer numbers. 2nd one will add two floating and one integer number. 3rd one will take two
complex objects as parameter and will add two complex numbers.*/
#include<iostream>
using namespace std;
class Complex{
public:
    float real;
    float img;
    Complex(float r=0,float i=0){
        real= r;
        img= i;
    }
    void input(){
        cout<<"ENTER REAL PART: ";
        cin>>real;
        cout<<"ENTER IMAGINARY PART: ";
        cin>>img;
        
    }
    void display(){
        cout<<real<<" + "<<img<<" i ";
    }
};
class Add{
public:
    void add(float f1, float f2, int i1){
        cout<<"SUM OF TWO FLOATING NUMBERS AND ONE INTEGER: "<<(f1+f2+i1)<<endl;
    }
    void add(int i1,int i2){
        cout<<"SUM OF TWO INTEGER NUMBERS: "<<(i1+i2)<<endl;
    }
    void add(Complex c1,Complex c2){
        Complex temp;
        temp.real= c1.real+ c2.real;
        temp.img= c1.img + c2.img;
        cout<<"SUM OF TWO COMPLEX NUMBERS: "; 
        temp.display();
    }
    
};
int main(){
    Add obj;
   obj.add(4,5);
   obj.add(4.5,2.5,3);
   Complex c1,c2;
   c1.input();
   c2.input();
   obj.add(c1,c2);
   
}
