#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            flag = false; // Use assignment operator to update flag
            break; // Exit the loop since the array is not sorted
        }
    }
    
    if (flag)  // (flag == true)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;

 

    return 0;
}