#include <bits/stdc++.h>
using namespace std;
void dfs(int start, vector<vector<int>>& graph, vector<bool>& visited){
    visited[start]=true;
    cout<<start<<" ";
    for(auto neighbour:graph[start]){
        if(!visited[neighbour]){
            dfs(neighbour,graph,visited);
        }
    }
    
}
int main(){
    int V,E;
    cin >> V >>E;
    vector<vector<int>> graph(V);
    for(int i=0;i<E;i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> visited(V,false);
    cout<<"Enter the starting vertex: ";
    int start;
    cin>>start;
    dfs(start,graph,visited);
    
    return 0;
}