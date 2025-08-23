#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    // pair<string,int>p1;
    // p1.first = "Ram";
    // p1.second = 30;
    m["prakash"] = 67;  // another way of inserting into in the maps...
    m["aditya"] = 23;

    for (auto p : m)  // for each loop.
    {
        cout<<p.first<<" "<<p.second<<endl;
    }


    //searching in the map..........
    string target = "prakash";
    if ( m.find(target) != m.end())
    {
        cout<<"Exits"<<endl;
    }
    
    
return 0;
}