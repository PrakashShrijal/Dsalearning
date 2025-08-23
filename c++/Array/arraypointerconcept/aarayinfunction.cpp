//array in function and pointer concept
#include<iostream>
using namespace std;
void display(int a[],int size){// int a[] can be int* a (why ?)
    for (int i = 0; i <= size-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
void change(int b[],int size){ //here int b[] is pointer we can also write it as int* b
    b[0] = 100;
}
int main()
{
    int arr[] = {1,2,4,55,22,56};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    //accessing the elements of array
    //updating, pass by value/reference
    display(arr,size);//in this we are giving address of array to function and it can perform the task
    change(arr,size);
    display(arr,size);
return 0;
/* technically whenever we are passing array to function we are passing adress of array to 
function.*/
}