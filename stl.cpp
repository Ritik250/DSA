#include <bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int>dq;
    dq.push_back(1); //1
    dq.emplace_back(2); //1,2
    dq.push_front(3); //312
    dq.emplace_front(4);// 4312

    dq.pop_back(); // 431
    dq.pop_front(); // 41
    dq.back();
    dq.front();
}

void explainStack() {
stack<int> st;
st.push(1); // {1}
st.push(2); // {2,1}
st.push(3); // {3, 2, 1}
st.push(3); // {3, 3, 2,1}
st.emplace(5); // {5, 3, 3, 2, 1}

cout << st.top(); // prints 5 " ** st[2] is invalid ** "

st.pop(); // st looks like {3, 3, 2,1}

cout << st.top(); // 3

cout << st.size(); // 4

cout << st.empty();

stack<int>st1, st2;
st1.swap(st2);

}

void explainQueue() {
    queue<int> q;
    q. push(1); // {1}
    q. push(2); // {1, 2}
    q. emplace(4); // {1, 2, 4}

    q. back() += 5;

    cout << q.back(); // prints 9

    // Q is {1, 2, 9}
    cout << q.front(); // prints 1

    q.pop(); // {2, 9}

    cout << q.front(); // prints 2

    // size swap empty same as stack
}

void explainMap() {

    map<int, int> mpp;

    map<int, pair<int, int>> mpp1;

    map< pair<int, int>, int> mpp2;

    mpp[1] = 2;
    mpp.emplace(3, 1);

    mpp.insert({2, 4});

    mpp2[{2,3}] = 10;
    for(auto it : mpp) {
    cout << it.first << "" << it.second << endl;

    cout << mpp[1];
    cout << mpp[5];
    }
}

void explainPQ() {
    priority_queue<int>pq;

    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); //{8,5,2}
    pq. emplace(10); // {10, 8,5, 2}

    cout << pq.top();// prints 10

    pq.pop(); //{8,5,2}

    cout << pq.top();//prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5); // {5}
    pq1.push(2); // {2, 5}
    pq1.push(8); // {2, 5, 8}
    pq1.emplace(10); // {2, 5, 8, 10}
    cout << pq1.top(); // prints 2
}

int main(){
    // pair<int,int> p = {1,3};
    // cout<<p.first<<" "<<p.second;
    // pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    // cout<<arr[0].first;

    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);

    // vector<pair<int,int>> vec;
    // vec.push_back({1,2});
    // vec.emplace_back(1,2);

    // vector<int> vi={1,2,3,4,5};
    // cout<<vi[1]<<" "<<vi[4]<<endl;
    
    // vector<int> :: iterator it= vi.begin();
    // it++;
    // cout<<*(it)<<" ";
    // it=it+2;
    // cout<<*(it)<<" ";

    // for(auto it =vi.begin(); it!=vi.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // for(auto it:vi){
    //     cout<<it<<" ";
    // }
    // vi.erase(vi.begin()+1,vi.begin()+3);
    // vi.insert(vi.begin()+1,2);
    // vi.insert(vi.begin()+2,3);
    // for(auto it: vi){
    //     cout<<it<<" ";
    // }

    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(7);
    for(auto it: ls){
        cout<<it<<" ";
    }
    return 0;
    
}

