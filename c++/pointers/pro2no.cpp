//wrie a program to find the product of two numbwers usinng pointers
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int *ptrx, *ptry;
    ptrx = &x;
    ptry = &y;
    int ans;
    int *ptrAns = &ans;
    *ptrAns = (*ptrx) * (*ptry);
    cout<<*ptrAns<< endl;

return 0;
}