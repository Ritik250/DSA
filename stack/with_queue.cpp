#include <bits/stdc++.h>
using namespace std;

class Stack{
    private:
    queue<int> q;

    public:
    void push(int value){
        int s=q.size();
        q.push(value);
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop(){
        if(q.empty()){
            cout<<"Stack is empty "<<endl;
            return;
        }
        q.pop();
    }
    void top(){
        if(q.empty()){
            cout<<"stack is empty "<<endl;
            return;
        }
        cout<<q.front()<<" is the top element \n";
    }
};


int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.top();  // 30

    s.pop();
    s.top();  // 20
    return 0;
}