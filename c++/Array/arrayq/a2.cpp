/* reverse order array*/
#include<iostream>
using namespace std;
int main(){
    int p[50];
    int n,i;
    cout<<"Enter the numberof element:";
    cin>>n;
    cout<<"Enter the"<< n <<"elements in array:"<<endl;

    for ( i = 0; i < n; i++)
    {
        cout<<"ELEMENTS AT"<<i+1<<":-";
        cin>>p[i];
    }
    cout<<"element in reverse order are:";
    for ( i = n-1; i > 0; i--)
    {
        cout<<p[i]<<" ";
    }
    return 0;
    


}