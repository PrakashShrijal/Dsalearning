// Rotate the given array a by  k steps, where k is non-negative

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>&a){
    for (int i = 0; i < a.size(); i++)
    {
    cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i, int j, vector<int> &a)
{
    while (i <= j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}

int main()
{
    vector<int> v;
    v.push_back(23);
    v.push_back(56);
    v.push_back(67);
    v.push_back(89);
    v.push_back(12);
    v.push_back(21);
    v.push_back(78);
    v.push_back(90);
    //rotating the array v 3 times
    display(v);
    int k = 4;
    int n = v.size(); // n = 8
    if (k>n)
     k = k % n;   //condition..... ifnot then sagmemntation fault.
    
    
    reversepart(0,n-k-1,v);
    display(v);
    reversepart(n-k,n-1,v);
    display(v);
    reversepart(0,n-1,v);
    display(v);
       
//output
// 23 56 67 89 12 21 78 90 
// 12 89 67 56 23 21 78 90 
// 12 89 67 56 23 90 78 21 
// 21 78 90 23 56 67 89 12 

    return 0;
}