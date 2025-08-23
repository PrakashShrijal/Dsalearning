#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,3,67,74,8,7,76};
    int*ptr = arr;  //giving address
    //int*ptr = &arr (it will give error)
    //int*ptr = &arr[0] true
   // cout<<ptr[0];//output 4
   for (int i = 0; i <= 6; i++)
   {
    cout<<*ptr<<" "; //we can put i(ptr)& also i(arr) to print.
    ptr++
   }
   ptr = arr; //ponting to 1 element (why this ?)
   //cout<<ptr<<endl; this will also give output
   /* for(int i=0; i<=6; i++){
        cout<<ptr[i]<<" ";
        } this will also give output*/
        *ptr = 8; //ptr[0]= 8
        ptr++; //ptr is pointing to 2nd element
        *ptr = 9;
        ptr--; //ptr is pointing to 1st element
return 0;

/* ans to why ques - we do ptr = arr so, it will again point to the 1st element of array( same in ptr--)
this is done so that it will not exceed the array limit and will not point to any other location
 basically in case of loop*/
}