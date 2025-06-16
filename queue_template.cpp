/*Implement QUEUE class, which will perform all operations of a
linear queue using template.*/
#include<iostream>
using namespace std;
const int SIZE=5;
template <class T>
class Queue{
    int front,rear;
    T arr[SIZE];
public:
    Queue(){
        front =-1;
        rear= -1;
    }
    void enqueue(T value){
        if(rear ==(SIZE-1)){
            cout<<"OVERFLOW"<<endl;
        }else{
            if(front==-1){
                front=0;
            }
            rear++;
            arr[rear]=value;
            cout<<value<<" is inserted into the queue"<<endl;
        }
    }
    void dequeue(){
        if((front==-1)||front>rear){
            cout<<"UNDERFLOW"<<endl;
        }else{
            cout<<arr[front]<<" is to be deleted."<<endl;
            front++;
        }
    }
    void display(){
        if((front==-1)||front>rear){
            cout<<"UNDERFLOW"<<endl;
        }else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        
    }
};
int main(){
    Queue<int> q;
    q.enqueue(30);
    q.enqueue(20);
    q.enqueue(10);
    
    q.display();
    q.dequeue();
    q.display();
    return 0;
}

