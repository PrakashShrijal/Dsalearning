#include<iostream>
using namespace std;
int main(){
    int array[]={2,3,4,5,67,8,8,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    int sum = 0;
    for (int i = 0; i < size ; i++)
    {
        sum += array[i];
    }
    cout<<"sum of array is :"<<sum<<endl;
    sizeof(array);
    cout<<sizeof(array)<<endl;
    cout<<size;
    return 0;



}
