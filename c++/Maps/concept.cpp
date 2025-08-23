#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int>p1; // creating pairs.
    p1.first = "Prakash";
    p1.second = 76;
    pair<string,int>p2;
    p2.first = "Aman";
    p2.second = 79;
    pair<string,int>p3;
    p3.first = "Ankit";
    p3.second = 74;

    m.insert(p1);  // inserting into the maps
    m.insert(p2);
    m.insert(p3);

    

    for (pair<string,int> p : m)   // for each loop
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    

    return 0;
}