#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1,1,2,3,4,5};
    vector<int> v2={2,3,4,4,5};
    vector<int> ans;
    int n1=v1.size();
    int n2=v2.size();
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(v1[i]<v2[j] ){
            if(ans.empty()||ans.back()!=v1[i])
            ans.push_back(v1[i]);
            i++;
            }
        else if(v1[i]>v2[j]){
            if(ans.empty()||v2[j]!= ans.back())
            ans.push_back(v2[j]);
            j++;
        }
        else{
            if(ans.empty()||ans.back()!=v1[i]){
                ans.push_back(v1[i]);
            }
            i++;j++;
        }
    }
    while(i<n1){
        if(ans.empty()||ans.back()!=v1[i]){
            ans.push_back(v1[i]);
        }
        i++;
    }
    while(j<n2){
        if(ans.empty()||ans.back()!=v2[j]){
            ans.push_back(v2[j]);
        }
        j++;
    }
    for(auto it: ans){
        cout<<it<<" ";
    }

}