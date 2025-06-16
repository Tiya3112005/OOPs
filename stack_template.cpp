/*Write a program in C++ to implement STACK class that will have
push, pop and display operations using template. Use a constructor to
initialize top value.*/
#include<iostream>
using namespace std;
const int SIZE=5;
template <class T>
class Stack{
    T arr[SIZE];
    int top;
public:
    Stack(){
       top=-1; 
    }
    void push(T value){
        if(top== (SIZE -1)){
            cout<<"STACK IS FULL"<<endl;
        }else{
            top++;
            arr[top]=value;
            cout<< value <<" is pushed into the stack"<<endl;
            
        }
    }
    void pop(){
        if(top==-1){
            cout<<"UNDERFLOW"<<endl;
        }else{
           cout<<arr[top]<<" is popped from the stack"<<endl;
           top--; 
        }
    }
    void display(){
        if(top==-1){
            cout<<"UNDERFLOW"<<endl;
        }else{
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    
};
int main(){
    Stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
    
}
