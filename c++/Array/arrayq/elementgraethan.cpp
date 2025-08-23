#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cout << "Enter the element in array:";
    cin >> n;
    int arr[n];
    cout << "enter the element in the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout<<"enetr the element:";
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > x)
        count++;
    }
    cout<<count;
    return 0;
}