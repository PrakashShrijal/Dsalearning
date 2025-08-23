// reverse in same array using 2 pointers

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
    vector<int>v(10);
    cout<<"enter the 10 array in :";
     for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    display(v);
    // using  while loop
    int temp;
    int i = 0;
    int j = v.size()-1;
    while (i<=j)
    {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;    
        i++;
        j--;
    }
    display(v);
    //using for loop
    for(i=0,j= v.size()-1;i<=j;i++,j--){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);
   
return 0;
}