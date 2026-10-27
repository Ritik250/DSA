#include <bits/stdc++.h>
using namespace std;

int sum_n(int n){
    if(n==0){
        return 0;
    }
    return n+sum_n(n-1);
}

int fib(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    return fib(n-1)+fib(n-2);
}

void num(int n){
    if(n==0){
        return;
    }
    num(n-1);
    cout<<n<<" ";
}

int main(){
    // num(10);
    // cout<<sum_n(10);
    cout<<fib(2);
    return 0;

}