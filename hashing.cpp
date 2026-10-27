#include<bits/stdc++.h>
using namespace std;


int main(){
    // int n;
    // cout<<"enter number of elements: ";
    // cin>>n;
    // int arr[n];
    // cout<<"enter elements: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // //precompute
    // int hash[13]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]++;
    // }
    // cout<<"number of elements to search ";
    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cout<<"enter the number ";
    //     cin>>number;
    //     cout<<hash[number]<<endl;
    // }

    string s;
    getline(cin,s);
    unordered_map<char,int> freq;
    for(char c:s){
        freq[c]++;
    }
    for(auto it: freq){
        cout<<it.first<<" "<<it.second<<endl;
    }

    char character;
    int count=0;
    for(auto it:freq){
        if (it.second>count){
            character=it.first;
            count=it.second;
        }
    }
    cout<<character<<" has highest frequency: "<<count<<endl;

    char characterr;
    int countt=INT_MAX;
    for(auto it:freq){
        if (it.second<count){
            characterr=it.first;
            countt=it.second;
        }
    }
    cout<<characterr<<" has lowest frequency: "<<countt<<endl;

    // int freq[26]={0};
    // for(char c: s){
    //     freq[c-'a']++;
    // }
    // for(int i=0;i<26;i++){
    //     if(freq[i]>0){
    //         cout<<char(i+'a')<<" has count of: "<<freq[i]<<endl;
    //     }
    // }
    return 0;


}