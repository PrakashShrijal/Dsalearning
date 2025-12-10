// the length of lonngest subarray which has maximum possible bitwise AND value from given subarray.
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[] = {12, 3, 1, 6, 1, 6, 6, 6, 4, 3, 8, 13, 13, 13, 13, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxEle = INT_MIN;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxEle)
        {
            maxEle = arr[i];
            count = 1;
        }
        else if (arr[i] == maxEle)
            count++;
    }

    cout << count<<" "<<"Element is :"<<maxEle;

    return 0;
}