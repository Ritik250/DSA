#include <bits/stdc++.h>
using namespace std;

class Stack{
    private:
    int arr[100];
    int top;

    public:
    Stack(){
        top=-1;
    }
    
    void push(int value){
        if (top==99){
            cout<<"stack overflow!"<<endl;
            return;
        }
        else{
            arr[++top]=value;
            cout<<value<<" pushed into the stack"<<endl;
        }
    }

    bool isEmpty(){
        if (top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void pop(){
        if (isEmpty()){
            cout<<"stack underflow!"<<endl;
        }
        else{
            cout<<arr[top]<<" popped from the stack."<<endl;
            top--;
        }
    }

    void peek(){
        if (isEmpty()){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"top element is "<<arr[top]<<endl;
        }
    }

    void display(){
        if(isEmpty()){
            cout<<"stack empty"<<endl;
        }
        cout<<"stack elements: ";
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;   
    }
};


int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.peek();
    s.pop();
    s.isEmpty();
    s.push(4);
    s.display();
    return 0;

}