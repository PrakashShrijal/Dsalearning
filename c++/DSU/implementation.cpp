#include<bits/stdc++.h>
using namespace std;

int find(vector<int> &parent, int x){
    // This method returns which group/cluster x belong to
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

void Unoin(vector<int> &parent, vector<int> &rank, int a, int b){
    a = find(parent, a);
    b = find(parent, b);

    if(rank[a] >= rank[b]){
        rank[a]++;
        parent[b] = a;
    }else{
        rank[a]++;
        parent[a] = b;
    }
}
int main()
{ // note time complexity is (log*n);

    int n, m;
    cin>>n>>m;
    // n-> elements, m -> no of queries
    vector<int> parent(n+1);
    vector<int> rank(n+1, 0);
    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
    }
    
    while (m--)
    {
        string str;
        cin>>str;
        if(str == "union"){
            int x,y;
            cin>>x>>y;
            Unoin(parent,rank, x, y);
        }else{
            int x;
            cin>>x;
            cout<<find(parent, x)<<"\n";
        }
    }
    
return 0;
}