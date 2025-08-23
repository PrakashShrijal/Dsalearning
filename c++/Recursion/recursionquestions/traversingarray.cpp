#include <iostream>
using namespace std;

void dispaly(int arr[], int n, int idx)
{
    if (idx == n)
        return;
    cout << arr[idx] << " ";
    dispaly(arr, n, idx + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 8, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for(int ele : arr){
    //     cout<<ele<<" "; ............... for each element
    // }

    dispaly(arr, n, 0);
    return 0;
}