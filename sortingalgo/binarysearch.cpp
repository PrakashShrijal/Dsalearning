#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch(vector<int> &input, int target)
{
    // define search space
    int lo = 0; // start of search space
    int hi = input.size() - 1;
    while (lo <= hi)
    { // calculate midpoint for the search space
        int mid = (lo + hi) / 2;
        if (input[mid] == target)
        {
            return mid;
        }
        else if (input[mid] < target)
        { // discard left of mid
            lo = mid + 1;
        }
        else
        { // discard of right of mid
            hi = mid - 1;
        }
    }
    return -1;
}
//using recursion
int binarySearchResur(vector<int> &input, int target, int hi, int lo)
{
  //  int mid = (hi + lo) / 2;  because this can cause overflow condition.
  int mid = lo + (hi-lo)/2;
    while (lo < hi)
    {
        if (input[mid] == target)
        {
            return mid;
        }
        else if (mid > target)
        {
            return binarySearchResur(input,target,lo,mid - 1);
        }
        else
        {
            return binarySearchResur(input,target,mid + 1,hi);
        }
    }
}
int main()
{
    // vector<int> input{1, 2, 4, 6, 7, 10, 14, 17, 19, 20};
    // int target = 21;
    int n;
    cout<<"Enter the number of element in the aaray: ";
    cin >> n;
    vector<int> input;
    cout<<"Enter the elements in array:";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        input.push_back(x);
    }
    int target;
    cout << "inter the target :";
    cin >> target;

   // cout << binarySearch(input, target);
   cout<<binarySearchResur(input,target,n-1,0);
    return 0;
}