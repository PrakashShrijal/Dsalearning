#include<iostream>
using namespace std;              //check it?
int main()
{
    int n, x;
    cout<<"Enter the size of array";
    cin>>n;
    
    int p[n];
    //input
    cout<<"input the elements in the array"<<endl;
    for (int i = 0; i <= n; i++)
    {
        cin>>p[i];
    }

     //print
     cout<<" the elements in the array are:"<<endl;
    for (int i = 0; i <= n; i++)
    {
        cout<<p[i] <<" ";
    }
    cout<<endl;
    cout<<"Enter the element you  want to search"<<endl;
    cin>>x;
    //search
    // check mark
    bool flag = true;
    for (int i = 0; i <= n; i++)
    {
        if (p[i] == x) flag = true;
        { 
         cout<<"element is present";   //check this concept again
        }
            
            
        
        
    }

    

return 0;
}