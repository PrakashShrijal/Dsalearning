//wrie a program to find the product of two numbwers using pointers.
#include<iostream>
using namespace std;
int  product(int* ptr1,int* ptr2){
  int  result = (*ptr1)*(*ptr2);
    return result;
}
int main()
{
    int n,m,r;
    cout<<"enter the first no."<<endl;
    cin>>n;
    cout<<"enter the second number"<<endl;
    cin>>m;
    int* ptr1 = &n;
    int* ptr2 = &m;
    r = product(ptr1,ptr2);
    cout<<r;

return 0;
}