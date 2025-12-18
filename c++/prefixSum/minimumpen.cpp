/*
You are given the customer visit log of a shop represented by a 0-indexed string customers consisting only of characters 'N' and 'Y':

if the ith character is 'Y', it means that customers come at the ith hour
whereas 'N' indicates that no customers come at the ith hour.
If the shop closes at the jth hour (0 <= j <= n), the penalty is calculated as follows:

For every hour when the shop is open and no customers come, the penalty increases by 1.
For every hour when the shop is closed and customers come, the penalty increases by 1.
Return the earliest hour at which the shop must be closed to incur a minimum penalty.

Note that if a shop closes at the jth hour, it means the shop is closed at the hour j
*/
#include<bits/stdc++.h>
using namespace std;
int minpenalty(string customer){
    int n = customer.size();
    vector<int>arr(n+1,0);
    for (int i = 1; i <= n; i++)
    {    
        arr[i] = arr[i-1];
        if(customer[i-1] == 'N'){
            arr[i]++;
        }
    }
    int p = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if(customer[i] == 'Y')
            p++;

            arr[i] += p;
            
        
    }
    int min = arr[0];
    int hour = 0;
    for (int i = 0; i <= n; i++)
    {
        if(min > arr[i]){
            min = arr[i];
            hour = i;
        }
    }
    
    return hour;
}

int main()
{
    string customer;
    cout<<"Enter the string as 'Y' or 'N' :";
    cin>>customer;
    int result = minpenalty(customer);
    cout<<"minimum penalty is "<<result;
return 0;
}