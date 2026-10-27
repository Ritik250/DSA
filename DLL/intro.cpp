#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* prev;
    Node* next;

    public:
    Node(int data1){
        data=data1;
        prev=nullptr;
        next=nullptr;
    }
    public:
    Node(int data1, Node* next1, Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
};
int main(){
    Node* newNode1=new Node(5);
    Node* newNode2=new Node(6);
    Node* newNode3=new Node(7);
    newNode1->next=newNode2;
    newNode2->prev=newNode1;
    newNode2->next=newNode3;
    newNode3->prev=newNode2;
    Node* temp=newNode3;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }

}