#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(5);  // this cannot be stored in the set, it stores only unique elements.
    s.erase(2);
    cout<<s.size()<<endl;
    //for each loop
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    int target = 5;
    if (s.find(target) != s.end())
    {
        cout<<"Exits"<<endl;
    }
    
    return 0;
}