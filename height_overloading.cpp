/*Create a class called HEIGHT that stores the height of a student in
feet and inches in two private instance variables. Include a constructor that
sets these values. Define a function into_cm(), which returns the height in
cm. overload the operator "-" to perform the difference of two student’s
heights. Also Overload comparison operators (<, ==) to compare
twostudent’s heights.*/
#include<iostream>
#include<cmath>
using namespace std;
class Height{
    int feet,inches;
public:
    Height(int f=0,int i=0){
        feet=f;
        inches=i;
    }
    void input(){
        cout<<"ENTER THE HEIGHT OF THE STUDENT: ";
        cin>>feet>>inches;
        cout<<endl;
    }
    float into_cm(){
        return (feet*12+inches)*2.54;
    }
    Height operator -(Height h){
        int h1_inches=(feet*12)+inches;
        int h2_inches= h.feet*12+h.inches;
        int diff=abs(h1_inches-h2_inches);
        return Height((diff/12),(diff%12));
    }
    bool operator <(Height h){
        return this->into_cm()< h.into_cm();
    }
    bool operator ==(Height h){
        return this->into_cm()== h.into_cm();
    }
    void display(){
        cout<<feet<<" FEET "<<inches<<" INCHES"<<endl;
    }
};
int main(){
    Height s1,s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();
    Height diff= s1-s2;
    cout<<"DIFFERENCE: ";
    diff.display();
    if(s1==s2){
        cout<<"BOTH THE HEIGHTS ARE EQUAL"<<endl;
    }else if(s1<s2){
        cout<<"FIRST STUDENT IS SHORTER THAN SECOND STUDENT"<<endl;
    }else{
        cout<<"FIRST STUDENT IS TALLER THAN SECOND STUDENT"<<endl;
    }
    return 0;
    
}
