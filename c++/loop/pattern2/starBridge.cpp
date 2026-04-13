#include <bits/stdc++.h>
using namespace std;


    int main()
    {
        int n;
        cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;

    //    for (int i = 1; i < n; i++)
    // {
        
    //     // left stars
    //     for (int j = 1; j < n - i+1 ; j++)
    //         cout << "*";

    //     // spaces
    //     for (int j = 1; j < 2*i - 1; j++)
    //         cout << " ";

    //     // right stars
    //     for (int j = 1; j < n - i+1; j++)
    //         cout << "*";

    //     cout << endl;
    // }
    int m = n-1;
    for (int i = 0; i <= 2*n-2; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    
        
    for (int i = 1; i <= m; i++)
    {
        
        for (int j = 1; j <= m+1-i; j++)
        {
            cout<<"* ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= m+1-i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    


        return 0;
    }
