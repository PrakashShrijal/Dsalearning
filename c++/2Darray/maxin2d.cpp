#include<iostream>
#include<climits>  //
using namespace std;
int main()
{
    
    int n,m;
    cout<<"enter the number of rows:";
    cin>>n;
    cout<<"enter the number of column:";
    cin>>m;
    int p[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>p[i][j];
        }
    }  
    // sum of 2 d matrix.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           sum += p[i][j];
            
        }
    }  
    cout<<sum<<endl;

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max<p[i][j])
            {
                max = p[i][j];
            }
            
        }
        
    }
      cout<<max;
return 0;
}