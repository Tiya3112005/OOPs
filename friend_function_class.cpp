//Show that a friendly function and class can access private members of a class.
#include<iostream>
using namespace std;
class Box{
    int length;
public:
    Box(){
         length=10;
    }
    friend void show(Box b);
};
void show(Box b){
    cout<<"LENGTH (BY FUNCTION): "<<b.length;
}
class Rec{
    float length,breadth;
public:
    Rec(float length,float breadth){
        this->length=length;
        this->breadth=breadth;
    }
    friend class Area;
};
class Area{
public:
    void calArea(Rec r){
        float area= r.length * r.breadth;
        cout<<"AREA (BY CLASS): "<<area<<endl;
    }
};


int main(){
    Box b;
    show(b);
    Rec r(4,3);
    Area a1;
    a1.calArea(r);
}
