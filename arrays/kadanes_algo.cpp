#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
    int maxi=INT_MIN;
    int sum=0;
    int start;
    int startAns;
    int endAns;
    for(int i=0;i<v.size();i++){
        if(sum==0) start=i;
        sum+=v[i];
        if(sum>maxi){
            maxi=sum;
            startAns=start;
            endAns=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"max sum possible is "<<maxi<<endl;
    for(int i=startAns;i<=endAns;i++){
        cout<<v[i]<<" ";
    }
}