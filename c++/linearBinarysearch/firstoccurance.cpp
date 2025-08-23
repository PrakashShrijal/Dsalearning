//find the first occurance of given number ...............................
#include<bits/stdc++.h>
using namespace std;
int main()
{
      
    int arr[13]  = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n = 13;
    int x ;
    cout<<"Enter the number :";
    cin>> x;
    int lo = 0;
    int hi = n-1;
    int idx = -1;
    while (lo <= hi)
    {  // this works in sorted array .........................
       int  mid = lo + (hi - lo) / 2;
        if (arr[mid] == x )
        {
            if (arr[mid-1] == x)
            {
                hi = mid -1;
            }else{
                idx = mid;
                break;
            }
            
        }else if (arr[mid] > x)
        {
            hi = mid-1;
        }else{
            lo = mid+1;
        }
        
        
    }
   if (idx != -1) {
        cout << "First occurrence of " << x << " is at index: " << idx << endl;
    } else {
        cout << x << " not found in the array." << endl;
    }
return 0;
}


/*   
    int arr[13] = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 8, 9};
    int n = 13;
    int x;
    cout << "Enter the number: ";
    cin >> x;

    int lo = 0;
    int hi = n - 1;
    int idx = -1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == x) {
            idx = mid; // Found the element, but continue searching to the left
            hi = mid - 1; // Move left to find the first occurrence
        } else if (arr[mid] > x) {
            hi = mid - 1; // Move left
        } else {
            lo = mid + 1; // Move right
        }
    }

    if (idx != -1) {
        cout << "First occurrence of " << x << " is at index: " << idx << endl;
    } else {
        cout << x << " not found in the array." << endl;
    }

    */
