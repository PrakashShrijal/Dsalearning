#include<iostream>
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
    int sumeve = 0;
    int sumodd = 0;
    for (int  i = 0; i < n; i++)
    {                              
        if (i%2==0)
        {   cout<<arr[i]<<" ";
          sumodd += arr[i];
                
        }else{
            cout<<arr[i]<<" ";
            sumeve += arr[i];
            
        }
        
    }
    cout<<"\nDifference between sum of even and odd elements: "<<sumeve-sumodd;
    
return 0;
}