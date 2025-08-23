
// reverse the part of array concept.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 void display(vector<int>& a){  // display function
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }
 void reversepart(int i,int j,vector<int>& v){  //to reverse part of array
    while (i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
 }
 void  reversearray(vector<int>& v){  //function to reverse whole array
    int i =  0;
    int j = v.size()-1;
     while (i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
 }
int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    v.push_back(45);
    v.push_back(23);
    v.push_back(89);
    v.push_back(90);
     display(v);
     reversepart(3,6,v);
       display(v);
       reversearray(v);
         display(v);
         reverse(v.begin(),v.end());  //inbuilt finction......   
return 0;
}