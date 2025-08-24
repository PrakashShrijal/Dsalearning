#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {2,3,6,8,9,10,13,14,5,19,20};
    int n = 11;
    bool flag = true;
    int i = 0;
    while (i<n-1)
    {
        if(arr[i] > arr[i+1]) {
        flag = false;
        break;
    }
      i++;
      
    }
    if(flag == true)cout<<"Array is sorted"<<endl;
    else cout<<"array  is unsorted";

return 0;
}