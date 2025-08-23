/*To input 10 elements in an array and print it*/
#include <iostream>
using namespace std;
int main(){
    int a[10];
    int i;
    cout<<"Enter The Element in aaray:"<<endl;
    for ( i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    cout<<"The element of the array are :";
    for ( i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
