#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v={5,1,8,6,10};
    int max=INT_MIN;
    int second = INT_MIN;

    for(auto it: v){
        if (it>max){
            second=max;
            max=it;
        }
        else if(it>second && it!=max){
            second=it;
        }
    }
    cout<<"second max element is "<<second<<endl;
}