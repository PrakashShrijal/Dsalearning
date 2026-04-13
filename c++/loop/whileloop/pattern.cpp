// 1 12 123 1234 using while loop
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of terms to be printed in  the pattern:";
    cin>>n;
    // int i = 1;
    // int num = i;
    // while (i <= n)       best for small number for large number interger overflow will  happen
    // {
    //     cout<< num<< " ";

    //     i++;
    //     num = num * 10 + i;
    // }
    int i = 1;
    while (i <= n)
    {
        int j =  1;
        while (j <= i )
        {
            cout<<j;
            j++;
        }
        cout<<" ";
        i++;
    }
    
    
return 0;
}