/*
Q4. Given an array of integers, print a sum triangle using recursion from it such that the first level has
all array elements. After that, at each level the number of elements is one less than the previous
level and elements at the level will be the sum of consecutive two elements in the previous level.
So, if sample input is [5, 4, 3, 2, 1], sample output will be:
[5, 4, 3, 2, 1]
[9, 7, 5, 3]
[16, 12, 8]
[28, 20]
[48]
*/
#include<bits/stdc++.h>
using namespace std;
void printlevel(vector<int> v){
    if(v.size() ==  0) return;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> next;
    for (int i = 0; i < v.size()-1; i++)
    {
        next.push_back(v[i] + v[i+1]);
    }

    printlevel(next);
    
    
}
int main()
{
    int n;
    cout<<"Enter the no of elements in the array:";
    cin>> n;
    cout<<"Enter the elements in the array:";
  
    // taking input 
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
   printlevel(arr);
return 0;
}