#include<iostream>
#include<vector>
using namespace std;

/*void dispaly(vector<int>& a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}*/
int main()
{
    vector<int> v (8);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];  // when size is derfined input in vector.
    }

     for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
        cout<<" ";
    }
    cout<<endl;
    vector<int> v2(v.size());
    for (int i = 0; i < v2.size(); i++)
    {
        int j = v.size()-1-i;
        v2[i] = v[j];  //v2[i] = v1[v1.size()-1-i]; 
    }
     for (int i = 0; i < v2.size(); i++)  // can use function for printing
    {
        cout<<v2[i];
        cout<<" ";
    }
return 0;
}