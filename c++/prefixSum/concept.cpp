#include<bits/stdc++.h>
using namespace std;
int fun(int arr[], int n){// sum of elements mut to idx where idx start from 1
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i]*(i+1);
        
    }
    return sum;
}
// another way to do it
int fun2(int arr[], int n){  // suffix sum approach
    int suffix = 0;
    int result = 0;
    for (int i = n-1; i >= 0; i--)
    {
        suffix += arr[i];
        result += suffix;
    }
    return result;
}
/* Both approaches run in O(n) time and O(1) space. 
However, the suffix-sum approach is more flexible and aligns naturally
 with greedy problems where time-shift effects matter.
*/
int main()
{
    int n;
    cout<<"Enter the number of elements in the array :";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in the array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int result = fun(arr,n);
    int result2 =  fun2(arr,n);
    cout<<result<<endl;
    cout<<result2;

    

return 0;
}