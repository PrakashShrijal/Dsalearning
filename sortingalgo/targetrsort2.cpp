#include <iostream>
#include <vector>
using namespace std;

int minimumInsrtedArray(vector<int> &arr)
{
    if (arr.size() == 1)
    { // base case whe one element is there.
        return arr[0];
    }
    // case when array is sorted
    int lo = 0, hi = arr.size() - 1;
    if (arr[lo] < arr[hi])
    {
        return lo;
    }
    // case of sorted rotated array
    while (lo <= hi)
    {

        int mid = lo + (hi - lo) / 2;
        // terminating condition...
        if (arr[mid] > arr[mid + 1])
        {
            return mid + 1;
        }
        if (arr[mid] < arr[mid + 1])
        {
            return mid;
        }
        // binary condition.....
        if (arr[mid] > arr[lo])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
}

int binarySearchRotated(vector<int> &arr, int target)
{
    int lo = 0,  hi = arr.size()-1;
    int min = minimumInsrtedArray(arr);
    int lefthi = min-1;
    while (lo <= lefthi)
    {
        int mid = lo +(lefthi - lo)/2;
        if (arr[mid] == target)
        {
            return mid;
        }else if (arr[mid] > target)
        {
            lefthi = mid-1;
        }else{
            lo = mid +1 ;
        }
        
        
    }

     while (min <= hi)
    {
        int mid = min +(hi - min)/2;
        if (arr[mid] == target)
        {
            return mid;
        }else if (arr[mid] > target)
        {
            hi = mid-1;
        }else{
            min = mid +1 ;
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

    int target;
    cout << "Enter the target element :";
    cin >> target;
    cout << binarySearchRotated(arr, target);
    return 0;
}