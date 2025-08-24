#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute force algorithm      // time complexity is O(root n) why?
int sqrtByLinearSearch(int p)
{
    int ans = -1;
    for (int i = 0; i < p; i++)
    {
        if (i * i <= p)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }
    return ans;
}
// optimized method   ,  timeComplexity O(log n)
int sqrt(int p)
{
    int lo = 0;
    int hi = p;
    int ans = -1;
    while (lo < hi)                      // check code for ending 0 num.......................................
    {   
        int mid = lo + (hi - lo) / 2;
        if (mid * mid <= p)
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int x;
    cout << "Enter the number whose sqrt is to be found :";
    cin >> x;
    //  cout<<sqrtByLinearSearch(x);
    cout << sqrt(x);
    return 0;
}