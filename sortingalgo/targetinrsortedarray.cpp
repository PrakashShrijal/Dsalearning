#include <iostream>
#include <vector>
using namespace std;

int binarySearchRotated(vector<int> &arr, int target)
{
    int lo = 0, hi = arr.size() - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] >= arr[lo])
        {
            if (target >= arr[lo] and target <= arr[mid])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        else
        {
            if (target <= arr[hi] and target >= arr[mid])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
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