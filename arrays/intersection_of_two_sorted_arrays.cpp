#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,1,2,3,4,4,5};
    vector<int> v2={2,3,4,4,5};
    vector<int> ans;
    int n1=v1.size();
    int n2=v2.size();
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(v1[i]<v2[j]){
            i++;
        }
        else if(v1[i]>v2[j]){
            j++;
        }
        else{
            ans.push_back(v1[i]);
            i++;
            j++;
        }
    }
    for(auto it: ans){
        cout<<it<<" ";
    }
}