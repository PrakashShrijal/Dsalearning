#include<iostream>
#include<vector>
using namespace std;
void change(int a[]){  //in this we need not to put size of array
    a[0] = 100;
}
void change2D(int arr[3][3]){  // here we need to put the size of array else error will occur.
    arr[0][0] = 100;
}
int main()
{
    int a[3] = {1,2,3};
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl;
    // int arr[3][3] = {{1,2,3,},{4,5,6},{7,8,9}};
    // cout<<arr[0][0]<<endl;
    // change2D(arr);
    //cout<<arr[0][0]<<endl;

    //now use of 2D vector passing in function need not to mention size.
    // move to concept3




return 0;
}