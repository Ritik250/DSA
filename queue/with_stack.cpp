#include <bits/stdc++.h>
using namespace std;

class Queue{
private:
    stack<int> s1,s2;
public:
    void enqueue(int value){
        s1.push(value);
        
    }

    void dequeue(){
        if(!s2.empty()){
            s2.pop();
        }
        else{
            while (s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
        }
    }
    void front(){
        if(!s2.empty()){
           cout<< s2.top()<<endl;
        }
        else{
            while (s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
            cout<<s2.top()<<endl;
        }
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.front();      
    q.dequeue();    

    q.front();      
    q.enqueue(40);

    q.dequeue();    
    q.enqueue(50);

    q.front();           

    q.dequeue();    
    q.dequeue();    

    q.front();      
    q.enqueue(60);
    q.front();

  


}