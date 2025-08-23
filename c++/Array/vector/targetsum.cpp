// modify so that element don't repeat.


#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for (int i = 0; i < a.size(); i++)
    {
         cout<<a[i]<<" ";
    }
    cout<<endl;
   
}

int main()
{
   
    vector<int>v;
    int n;
    cout<<"Enetr the size of array:";
    cin>>n;
    cout<<"Enter array"<<n <<"element in the array:";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
     int x;
    cout<<"enter the target :";
    cin>>x;

    for (int  i = 0; i < v.size()-2; i++)
    {
     
        for (int j = i+1; j < v.size()-1; j++)
        {
            if (v[i]+v[j] == x)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
            
        }
        
    }
    
    
return 0;
}