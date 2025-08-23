#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the no. element to be in array :";
    cin>>n;
    cout<<"enter the elements in array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the element X :";
    int x;
    cin>>x;
    int occurance = -1;
    int count = 0;
    
    for (int i =0 ; i< v.size(); i++) // here we can use loop in reverse order and find last occur.
    {
        if (v[i] == x)
        {
            occurance = i;
            count++;
            
            
            
        }
        
    }
    
    cout<<"elemrnt last occurance  is at: "<<occurance<<endl;
    cout<<"number of times  occurance: "<<count<<endl;
   
return 0;
}