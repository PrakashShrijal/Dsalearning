/*given an array of integer , change the value of all odd indexed
element tp its second multiple and increment all even index value by 10.
*/
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
    for (int i = 0; i < n; i++)
    {
        if(i% 2 == 0){
            arr[i] *= 2;
        }else{
            arr[i] += 10;
        }
    }
      for (int i = 0; i < n; i++)
    {
          cout<<arr[i]<<" ";
    }
    
    return 0;
}