#include<bits/stdc++.h>
using namespace std;

vector<list<int> > graph;

int v;   // no of vertices

void add_edge(int  src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int node, unordered_set<int> &visited){
    visited.insert(node);
    for (auto neighbour : graph[node])
    {
        if(not visited.count(neighbour)){
            dfs(neighbour, visited);
        }
    }
    
}

int connected_Components(){
    int result = 0;
    unordered_set<int> visited;
    for (int i = 0; i < v; i++)
    {
        // go to every vertex
        // if from a vertex we can initialse a dfs, we got one more cc
        if(visited.count(i) == 0){
            result++;
            dfs(i, visited);
        }
    }
    return result;
    
}
int main()
{

    cin>>v;   // vertices
    graph.resize(v, list<int>());
    int e;  // edges  
    cin>>e;
    while (e--)
    {
        int s, d;
        cin>>s>>d;
        add_edge(s,d,true);
    }
    cout<<connected_Components()<<"\n";
    
return 0;
}