/*Create two class DM & DB which store the value of distances. DM stores it in meter &
centimeters. DB stores it in feet & inches. Write a program that can read values for the class
objects & add one object of DM with another object of DB. Use a friend function to carry out
the addition operation. The objects that store the result may be of either type depending on
the units in which the results are required. The display function should act accordingly.*/
#include<iostream>
using namespace std;
class DB;
class DM{
    int meter,centimeter;
public:
    DM(){
        meter=0;
        centimeter=0;
    }
    void input(){
        cout<<"ENTER THE DISTANCE IN METER & CENTIMETER: ";
        cin>>meter>>centimeter;
    }
    void display(){
        cout<<"DISTANCE IS: "<<meter<<"m "<<centimeter<<"cm"<<endl;
    }
    friend DM add(DM,DB);
};
class DB{
    int feet,inch;
public:
    DB(){
        feet=0;
        inch=0;
    }
    void input(){
        cout<<"ENTER THE DISTANCE IN FEET & INCH: ";
        cin>>feet>>inch;
    }
    friend DM add(DM,DB);
    
};
DM add(DM d1,DB d2){
    int final_inch=d2.feet*12+ d2.inch;
    int total_cm=final_inch*2.54;
    int dm_total_cm=d1.meter*100+d1.centimeter;
    int final_cm=total_cm+dm_total_cm;
    DM result;
    result.meter=final_cm/100;
    result.centimeter=final_cm%100;
    return result;
}
int main(){
    DM d1;
    DB d2;
    d1.input();
    d2.input();
    DM result=add(d1,d2);
    result.display();
    return 0;
    
}
