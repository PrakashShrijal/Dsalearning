// try this 

#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the numebr of rows :";
    cin >> n;
    cout << "Enter the number of columns :";
    cin >> m;
    int p[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> p[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }


    // wave form 
    
return 0;
}