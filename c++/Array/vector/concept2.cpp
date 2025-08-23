#include<iostream>
#include<vector>
using namespace std;
int  main(){
   // vector<int> v(5,7);  initial size = 5, each element has value 7;
   vector<int> v;

    //putting value using for loop when  size is not defined.
   int n;
   cout<<"enter the size of array :"; 
   cin>>n;
   for (int i = 0; i < n; i++)
   {
    int x;
    cin>>x;
    v.push_back(x);
   }
   for (int i = 0; i < v.size(); i++)
   {
    cout<<v[i]<<" ";
   }
   
   

}