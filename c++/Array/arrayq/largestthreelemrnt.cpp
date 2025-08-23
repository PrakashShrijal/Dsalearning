#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the element in array:";
    cin >> n;
    int arr[n];
    cout << "enter the element in the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max1,max2,max3;
    max1 = max2 = max2 = arr[0];
    for (int  i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }else if (arr[i] > max2) 
        {
            max3 = max2;
            max2 = arr[i];
        }else if(arr[i] > max3){
            max3 = arr[i];
        }
        
        
    }
    cout<<endl<<"the three largets element in the array are :"<<max1<<" "<<max2<<" "<<max3;
    

    return 0;
}