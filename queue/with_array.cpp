#include <bits/stdc++.h>
using namespace std;

class Queue{
private:
    int *arr;
    int rear,front;
    int size;
public:
    Queue(int s){
        size=s;
        arr=new int[size];
        front=rear=-1;
    }
    void enqueue(int value){
        if(rear==size-1){
            cout<<"Queue overflow\n";
        }
        if(front==-1){
            front=0;
        }
        arr[++rear]=value;
        cout<<value<<" inserted into queue\n";
    }
    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"Queue underflow!\n";
        }
        cout<<arr[front]<<" removed \n";
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }

    void peek(){
        if(front == -1){
            cout<< "Queue is empty";
            return;
        }
        cout<<"Front element: "<<arr[front]<<endl;
    }

    void display(){
        if (front==-1){
            cout<<"queue is empty";
            return;
        }
        cout<<"queue elements:";
        for(int i= front;i<=rear;i++){
            cout<< arr[i]<<" ";
        }
        cout<<endl;
    }
    ~Queue(){
        delete[] arr;
    }
};

int main(){
    Queue q(10);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    q.peek();

    return 0;
}