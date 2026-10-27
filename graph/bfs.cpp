#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>>& graph, vector<bool>& visited){
    queue<int> Q;
    Q.push(start);
    visited[start]=true;
    while(!Q.empty()){
        int node=Q.front();
        Q.pop();
        cout<<node<<" ";
        for(auto neighbour : graph[node]){
            if(!visited[neighbour]){
                Q.push(neighbour);
                visited[neighbour]=true;
            }
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
    bfs(start,graph,visited);
    for(int i=0;i<V;i++){
        // cout<<i<<"->";
        for(int neighbour:graph[i]){
            // cout<<neighbour<<" ";
        }
        cout<<endl;
    }
    return 0;
}