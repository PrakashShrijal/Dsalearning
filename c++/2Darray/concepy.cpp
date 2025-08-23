//transpose of matrix
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of row:"<<endl;
    cin>>n;
    cout<<"Enter the enumber of column :"<<endl;
    cin>>m;
   int  matrix[n][m];
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= m-1; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
     for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= m-1; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
  //print transpose
  cout<<"transpose matrix is:"<<endl;
  for (int j = 0; j <= m-1; j++)
  {
    for (int i = 0; i <= n-1; i++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  
    
    
return 0;
}