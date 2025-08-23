#include<bits/stdc++.h>
using namespace std;

vector<list<int> > graph;
unordered_set<int> visited;
vector<vector<int> > result;
int v;
void add_edges(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

void bfs(int src, vector<int> &dist){
    queue<int> qu;
    visited.clear();
    dist.resize(v,INT_MAX);
    dist[src] = 0;  
    visited.insert(src);
    qu.push(src);
    while (not qu.empty())
    {
        int curr = qu.front();
        cout<<curr<<" ";
        qu.pop();
        for (auto neighbour : graph[curr])
        {
            if(not visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
        

    }
    cout<<endl;
}

int main()
{
    int x;
    cin>>x;
    vector<int> dist;
    bfs(x, dist);
    for(int i = 0; i < dist.size(); i++){
        cout<<dist[i]<<" ";
    }
return 0;
}