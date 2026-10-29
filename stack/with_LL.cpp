#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};
class Stack{
    private:
        Node* top;
    public:
        Stack(){
            top=NULL;
        }
        void push(int value){
            Node* newNode= new Node(value);
            newNode->next=top;
            top=newNode;
            cout<<value<<" pushed into the stack"<<endl;
        }

        void pop(){
            if (top==NULL){
                cout<<" Stack underflow"<<endl;
                return;
            }
            Node* temp=top;
            cout<<top->data<<" popped from stack"<<endl;
            top=top->next;
            delete temp;
        }
        void peek(){
            if(top==NULL){
                cout<<"stack is empty \n";
                return;
            }
            cout<<top->data<<" is top element \n";
        }

        void display(){
            if(top==NULL){
                cout<<"stack is empty \n";
                return;
            }
            Node* temp=top;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
};


int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();
    s.display();

    return 0;

}