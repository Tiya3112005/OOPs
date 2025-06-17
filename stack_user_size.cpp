#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int size;

public:
    // Constructor to create stack with user-defined size
    Stack(int s) {
        size = s;
        arr = new int[size];
        top = -1;
    }

    // Destructor to free allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Push operation
    void push(int val) {
        if (top == size - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = val;
            cout << val << " pushed to stack." << endl;
        }
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << "Popped element: " << arr[top--] << endl;
        }
    }

    // Display stack elements
    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size1, size2;

    cout << "Enter size of first stack: ";
    cin >> size1;
    Stack s1(size1);

    cout << "Enter size of second stack: ";
    cin >> size2;
    Stack s2(size2);

    // Operate on first stack
    cout << "\n--- Operations on Stack 1 ---\n";
    s1.push(10);
    s1.push(20);
    s1.display();
    s1.pop();
    s1.display();

    // Operate on second stack
    cout << "\n--- Operations on Stack 2 ---\n";
    s2.push(5);
    s2.push(15);
    s2.push(25);
    s2.display();
    s2.pop();
    s2.display();

    return 0;
}

