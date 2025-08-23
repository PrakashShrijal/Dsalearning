// two pass method................

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort0s1s(vector<int>&a){
    int n = a.size();
    int noz = 0;
    int noo = 0;
    for (int i = 0; i < n; i++) //counting no of zeros and ones.
    {
        if(a[i] == 0){
            noz++;
        }else noo++;
    }
    //filling of elements
    for (int i = 0; i < n; i++)
    {
        if (i<noz)
        {
            a[i] = 0;
        }else a[i] = 1;
        
    }
    

}
void display(vector<int>&a){  //display  function
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v(10);
    cout<<"Enter the elements only 0s and 1s in unsorted mannner :";
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    display(v);
    sort0s1s(v);
    display(v);
    sort(v.begin(), v.end());   // Inbuilt function for c++..........
    
return 0;
}