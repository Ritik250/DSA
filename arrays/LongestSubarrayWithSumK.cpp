#include <bits/stdc++.h>
using namespace std;

// for both +ve and -ve elements

// int main(){
//     vector<int> a = {2, 3, 5, 1, 9};
//     int k = 9;
//     int sum=0;
//     int maxLen=0;

//     map<int,int> PreSumMap;
//     for(int i=0;i<a.size();i++){
//         sum+=a[i];
//         if(sum==k){
//             maxLen=max(maxLen,i+1);
//         }
//         int rem=sum-k;
//         if(PreSumMap.find(rem)!=PreSumMap.end()){
//             int len = i-PreSumMap[rem];
//             maxLen=max(maxLen,len);
//         }
//         if(PreSumMap.find(sum)==PreSumMap.end()){
//             PreSumMap[sum]=i;
//         }
//     }
//     cout<<maxLen;
// }

// for only positive elements

int main(){
    vector<int> v={1,2,3,1,1,1,1,3,3};
    int k=4;
    int n=v.size();
    int MaxLen=0;
    int sum=v[0];
    int low=0;
    int high=0;
    while(high<n){
        while(low<=high && sum>k){
            sum-=v[low];
            low++;
        }
        if(sum==k){
            MaxLen=max(MaxLen,high-low+1);
        }
        high++;
        if(high<n) sum+=v[high];  
    }
    cout<< MaxLen;
}