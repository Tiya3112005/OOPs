/*Write a program in C++ to implement DATE class which will have 3 data members (day,
month, and year) and some member functions. Use a function to get date. Create another
function to validate a given date. (e.g. 30.02.2013 is not a valid date)*/
//rem
#include<iostream>
using namespace std;
class Date{
private:
    int d,m,y;
public:
    void input(){
        cin>>d>>m>>y;
    }
    bool valid(){
        if(y<1 || m<1 || m>12 || d<1 ||d>31)
            return false;
        int md[]={31,28,31,30,31,30,31,31,30,31,30,31};
        bool leap= ((y%4==0)&&(y%100!=0)||(y%400 ==0));
        if(leap){
            md[1]=29;
        }
        return d<=md[m];
        
    }
    void display(){
        cout<<d<<"."<<m<<"."<<y;
    }
};
int main(){
    Date d1;
    d1.input();
    d1.display();
    cout<<(d1.valid() ? "VALID" :"INVALID");
    return 0;
}
