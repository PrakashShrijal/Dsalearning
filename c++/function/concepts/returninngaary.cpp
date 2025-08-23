// finding next greatest element ............

#include <bits/stdc++.h>
using namespace std;
int *nextGreatestelement(int arr[], int size)  // checck.................
{
    int *nge = new int[size];
    for (int i = 0; i < size; i++)
    {
        nge[i] = -1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                nge[i] = arr[j];
                break;
            }
        }
    }
    return nge;
}

int main()
{
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
    cout << nextGreatestelement(arr, 8);
    return 0;
}