#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number of first rows:";
    cin>>n;
    cout<<"enter the number of first column:";
    cin>>m;
    int p[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>p[i][j];
        }
    } 
    int a,b;
    cout<<"enter the number of second rows:";
    cin>>a;
    cout<<"enter the number of second column:";
    cin>>b;
    int q[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin>>q[i][j];
        } 
    }    
         
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
          p[i][j] = p[i][j] + q[i][j];
        }
    }  
    
return 0;
}