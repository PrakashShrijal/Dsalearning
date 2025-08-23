#include <bits/stdc++.h>
using namespace std;
vector<list<int> > graph;
int v; // no of vertices
void add_edges(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto ele : graph[i])
        {
            cout << ele << " , ";
        }
        cout << "\n";
    }
}

int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edges(s, d);
    }
    display();

    return 0;
    /*
7
7
0 2
0 1
1 5
2 5
2 3
3 6
6 4
0 -> 2 , 1 , 
1 -> 0 , 5 ,
2 -> 0 , 5 , 3 , 
3 -> 2 , 6 ,
4 -> 6 ,
5 -> 1 , 2 , 
6 -> 3 , 4 ,
    */
}