#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printSubSet(int arr[], int n, int idx, vector<int> ans, int k)
{
    if (idx == n)
    {
        //    for (int i = 0; i < ans.size(); i++)
        //    {
        //     cout<<ans[i]<<" ";
        //    }
        if (ans.size() == k)
        {
            for (int ele : ans)
            {
                cout << ele << " ";
            }
            cout << endl;
        }
        return;
    }
    if(ans.size()+(n-idx) < k) return;
    printSubSet(arr, n, idx + 1, ans ,k);
    ans.push_back(arr[idx]);
    printSubSet(arr, n, idx + 1, ans ,k);
}
int main()
{
    int arr[] = {1, 2, 3,4,5};
    vector<int> v;
    int k =3;
    int n = sizeof(arr) / sizeof(arr[0]);
    printSubSet(arr, n, 0, v,k);
    return 0;
}