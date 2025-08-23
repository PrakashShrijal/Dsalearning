#include<iostream>
using namespace std;
int main()
{   
    int m,n;
 cout<<"Enter the number of rows  1 matrix:";
 cin>>m;
 cout<<"Enter the number of column 1 matrix:";
 cin>>n;   
 int a[m][n];
 
 for (int i = 0; i <= m-1; i++)
 {
    for (int j = 0; j <= n-1; j++)
    {
        cin>>a[i][j];
    }
    
 }
 int o,p;
 cout<<"Enter the number of rows  2 matrix:";
 cin>>o;
 cout<<"Enter the number of column 2 matrix:";
 cin>>p;   
 int b[o][p];
 for (int i = 0; i <= o-1; i++)
 {
    for (int j = 0; j <= p-1; j++)
    {
        cin>>b[i][j];
    }
    
 }

 if(n == o){
 //now multiplication of two matrix
 
 int resl[m][p];
 for (int i = 0; i < m; i++)
 {
    for (int j = 0; j < p; j++)
    {
        resl[i][j] = 0;
        for (int k = 0; k < n; k++)
        {
            resl[i][j] += a[i][k] * b[k][j];
        }
        
    }
    
 }
 cout<<endl;
 for (int i = 0; i < m;i++)
 {
    for (int j = 0; j < p; j++)
    {
        cout<<resl[i][j]<<" ";
    }
    cout<<endl;
 }
 }else
 {
    cout<<"matrix cannot be multiplied!";
 }
 

return 0;
}