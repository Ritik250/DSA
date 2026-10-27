#include <bits/stdc++.h>
using namespace std;
int main(){
    int V,E;
    cin>> V >>E;
    vector<vector<int>> graph(V,vector<int>(V,0));
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }
    for(int i =0;i<V;i++){
        for(int j=0;j<V;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}