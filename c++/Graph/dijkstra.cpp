#include<bits/stdc++.h> // Shortest path 
#define pp pair<int, int>
using namespace std;

vector<list<pp > > gr;
void add_edges(int u, int v, int wt, bool bidir = true){
    gr[u].push_back({v, wt});
    if(bidir){
        gr[v].push_back({u,wt});
    }
}

unordered_map<int, int> dijkstra(int src, int n){
    priority_queue<pp,vector<pp>, greater<pp> > pq; // {wt,node}
    unordered_set<int> vis;
    vector<int> via(n+1);
    unordered_map<int,int> mp;
    for (int i = 1; i <= n; i++)  // O(v)
    {
        mp[i] = INT_MAX;
    }
    pq.push({0, src});
    mp[src] = 0;
    while (!pq.empty()) // O(V+E )
    {
        pp curr = pq.top();
        if(vis.count(curr.second)){
        pq.pop();
        continue;
    }
         vis.insert(curr.second);
        pq.pop();
        for (auto neighbour : gr[curr.second])
        {
            if(!vis.count(neighbour.first) and mp[neighbour.first] > mp[curr.second] + neighbour.second){
                pq.push({mp[curr.second], neighbour.first});
                via[neighbour.first] = curr.second;
                mp[neighbour.first] = mp[curr.second] + neighbour.second;
            }
        }
        
    }
   return mp;
}
int main()
{
    int n,m;
    cin>>n>>m;
    gr.resize(n+1, list<pp >());
    while (m--)

    {
        int u,v, wt;
        cin>>u>>v>>wt;
        add_edges(u, v, wt);
    }
    int src;
    cin>>src;
    unordered_map<int, int> sp = dijkstra(src, n);
    for(auto p : sp){
        cout<<p.first<<" "<<p.second<<"\n";
    }
    int dest;
    cin>>dest;
    cout<<sp[dest]<<"\n";
    /*
7
9
0 1 1
0 2 5
1 3 1
1 2 4
2 4 1
3 4 1
3 6 2
4 5 5
6 5 1
0  source
5 destination
5
     */
return 0;
}