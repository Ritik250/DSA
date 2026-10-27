#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int x=n;
    int arm=0;
    while(x>0){
        int digit=x%10;
        x=x/10;
        arm+=digit*digit*digit;
    }
    if(arm==n){
        return 1;
    }
    else{
        return 0;
    }
}

void AllDivisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    // int x=n;
    // int rev=0;
    cin>>n;
    // while(n>0){
    //     int digit=n%10;
    //     n=n/10;
    //     rev=rev*10+digit;
    // }
    // cout<<rev<<endl;
    // if(rev==x){
    //     cout<<"yes palindrome";
    // }
    // else{
    //     cout<<"not palindrome";
    // }
    // cout<<(armstrong(n)?"yes":"no");
    AllDivisor(n);

}