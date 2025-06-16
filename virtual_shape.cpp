/*Write a program to create a class shape with functions to find area of
the shapes and display the name of the shape and other essential
component of the class. Create derived classes circle, rectangle and
trapezoid each having overridden functions area and display. Write a
suitable program to illustrate virtual functions and virtual destructor.*/
#include<iostream>
#include<cmath>
using namespace std;
class Shape{
public:
    virtual void display(){
        cout<<"THIS IS A GENERIC SHAPE";
    }
    virtual float area()=0;
    virtual ~Shape(){
        cout<<"BASE CLASS DESTRUCTOR";
    }
};
class Circle: public Shape{
    float radius;
public:
    Circle(float radius){
        this->radius=radius;
    }
    void display() override{
        cout<<"SHAPE: CIRCLE"<<endl;
    }
    float area() override{
        return 3.14*radius*radius;
    }
    ~Circle(){
        cout<<"CIRCLE DESTRUCTOR "<<endl;
    }
};
class Rectangle: public Shape{
    float length, breadth;
public:
    Rectangle(float length, float breadth){
        this->length=length;
        this->breadth= breadth;
    }
    void display() override{
        cout<<"SHAPE: RECTANGLE"<<endl;
    }
    float area() override{
        return length*breadth;
    }
    ~Rectangle(){
        cout<<"RECTANGLE DESTRUCTOR"<<endl;
    }
    
};
class Trapezoid: public Shape{
    float a,b,height;
public:
    Trapezoid(float a,float b,float height){
        this->a=a;
        this->b=b;
        this->height=height;
    }
    void display() override{
        cout<<"SHAPE: TRAPEZOID"<<endl;
    }
    float area() override{
        return 0.5*(a+b)*height;
    }
    ~Trapezoid(){
        cout<<"TRAPEZOID DESTRUCTOR"<<endl;
    }
    
};
int main(){
    Shape* s;
    s= new Circle(7);
    s->display();
    cout<<"AREA OF CIRCLE: "<<s->area()<<endl;
    delete s;
    cout<<endl;
    
    s= new Rectangle(3.5,2.5);
    s->display();
    cout<<"AREA OF RECTANGALE: "<<s->area()<<endl;
    delete s;
    cout<<endl;
    
    s=new Trapezoid(2,3,5);
    s->display();
    cout<<"AREA OF TRAPEZOID: "<<s->area()<<endl;
    cout<<endl;
    }

