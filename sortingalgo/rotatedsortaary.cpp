/* finding minimum in rotated sorted array  */
/*
* TIME complexity is O(log n)
* Spacecomp. is O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int findMinimumSortedRotated(vector<int> &arr)
{
    if (arr.size() == 1) // case when only one element is present in array.
    {
        return arr[0];
    }
    int lo = 0, hi = arr.size() - 1;
    if (arr[lo] < arr[hi]) // if true means array is sorted   -----why?
    {
        return lo;
    }

    while (lo < hi)     // case of sorted rotated....
    {
        int mid = lo + (hi - lo) / 2;  
        if (arr[mid] > arr[mid + 1])  // terminating condition
        {
            return mid + 1;
        }
        if (arr[mid] < arr[mid + 1])
        {
            return mid;
        }
            // binarysearch condition.
        if (arr[mid] > arr[lo])
        {
            lo = mid + 1; // discarding left element
        }
        else
        {
            hi = mid - 1;   // discarding right element
        }
    }
    return -1;
}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the array :";
    cin >> n;

    cout << "Enter the element in array in sorted or may be sorted rotated as many times :";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << findMinimumSortedRotated(arr);
    return 0;
}